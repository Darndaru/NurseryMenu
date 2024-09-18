#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <Qt>
#include <QDebug>
#include "Database.h"
#include "backend.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    qmlRegisterType<Backend>("io.qt.Backend", 1, 0, "Backend");
    engine.load(QUrl(QStringLiteral("qrc:/child_food/View/Main.qml")));

    return app.exec();
}
