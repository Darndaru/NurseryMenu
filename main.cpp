#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <Qt>
#include <QDebug>
#include "Database.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/child_food/View/Main.qml")));

    return app.exec();
}
