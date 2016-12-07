#ifndef QUICKOBJECT_H
#define QUICKOBJECT_H

#include <QObject>
#include <QMetaObject>
#include <QString>
#include <QtQml>

class QuickObject
{
    Q_GADGET
    Q_PROPERTY(QString name READ name WRITE setName)
public:
    QuickObject();
    QuickObject(const QuickObject &alData);
    ~QuickObject();

    QString name() const;
    void setName(const QString &nm);

    QuickObject &operator=(const QuickObject &alData);
    bool operator==(const QuickObject &alData) const;
    bool operator!=(const QuickObject &alData) const;

private:
    QString		m_name;
};


Q_DECLARE_METATYPE(QuickObject)

#endif // QUICKOBJECT_H
