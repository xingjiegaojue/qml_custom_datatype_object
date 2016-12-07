#ifndef QUICKOBJECTFACTORY_H
#define QUICKOBJECTFACTORY_H

#include <QObject>

#include "quickobject.h"

class QuickObjectFactory : public QObject
{
    Q_OBJECT
public:
    QuickObjectFactory(QObject *parent = 0);
    ~QuickObjectFactory();

    Q_INVOKABLE QuickObject queryQuickObject();

private:
};

#endif // QUICKOBJECTFACTORY_H
