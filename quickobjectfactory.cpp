#include "quickobjectfactory.h"
#include "quickobject.h"

#include <QCoreApplication>
#include <QtQml>

QuickObjectFactory::QuickObjectFactory(QObject *parent) : QObject(parent)
{
}


QuickObjectFactory::~QuickObjectFactory()
{
}


QuickObject QuickObjectFactory::queryQuickObject()
{
    return QuickObject();
}
