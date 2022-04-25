#ifndef HELPERFUNCTIONS_H
#define HELPERFUNCTIONS_H

#include <QList>
#include <QString>
#include <QStringList>
#include "qgsapplication.h"

struct OmcHelperFunctions {
    ///
    /// \brief getCustomCrs 从用户db文件中获取omc_开头的坐标系信息
    /// \param authidList 数量与descList一定是一致的，且一一对应
    /// \param descList
    ///
    static void loadAllCrs() ;
    static QStringList s_allCrsAuthidList, s_allDescList , s_allWktList ;//除了用户投影信息这里还最加一个WGS84



} ;



#endif // HELPERFUNCTIONS_H
