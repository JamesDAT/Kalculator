#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "equation/treebuilder.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    TreeBuilder treeBuilder{};
    treeBuilder.CreateTree("1+2/120(16x)2.2");

    QQmlApplicationEngine engine;
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("Kalculator", "Main");

    return app.exec();
}
