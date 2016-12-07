#include "quickobject.h"

QuickObject::QuickObject() : m_name("quick object name")
{
}


QuickObject::QuickObject(const QuickObject &alData)
{
    m_name = alData.m_name;
}


QuickObject::~QuickObject()
{
}


QuickObject &QuickObject::operator=(const QuickObject &alData)
{
    if(this != &alData) {
        m_name = alData.m_name;
    }

    return *this;
}


bool QuickObject::operator==(const QuickObject &alData) const
{
    return (m_name == alData.m_name);
}


bool QuickObject::operator!=(const QuickObject &alData) const
{
    return !(operator==(alData));
}


QString QuickObject::name() const
{
    return m_name;
}


void QuickObject::setName(const QString &nm)
{
    if(m_name != nm) {
        m_name = nm;
    }
}


namespace
{
const int QuickObjectMetaTypeId = qMetaTypeId<QuickObject>();
}
