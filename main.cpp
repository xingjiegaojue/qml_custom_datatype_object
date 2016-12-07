#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "quickobjectfactory.h"
#include <QtQml>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    qmlRegisterUncreatableType<QuickObject>("weiqian.lasermark",1,0,"QuickObject","Create quick object failed!");
    qmlRegisterType<QuickObjectFactory>("weiqian.lasermark",1,0,"QuickObjectFactory");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}

