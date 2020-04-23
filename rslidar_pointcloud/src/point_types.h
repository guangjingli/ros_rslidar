//
// Created by lgj on 2020/4/22.
//

#ifndef ROS_RSLIDAR_POINT_TYPES_H
#define ROS_RSLIDAR_POINT_TYPES_H

#include <pcl/point_types.h>

namespace rslidar_pointcloud
{
    /** Euclidean Velodyne coordinate, including intensity and ring number. */
    struct PointXYZIR
    {
        PCL_ADD_POINT4D;                    // quad-word XYZ
        float    intensity;                 ///< laser intensity reading
        uint16_t ring;                      ///< laser ring number
        EIGEN_MAKE_ALIGNED_OPERATOR_NEW     // ensure proper alignment
    } EIGEN_ALIGN16;

}; // namespace rslidar_pointcloud


POINT_CLOUD_REGISTER_POINT_STRUCT(rslidar_pointcloud::PointXYZIR,
(float, x, x)
(float, y, y)
(float, z, z)
(float, intensity, intensity)
(uint16_t, ring, ring))



#endif //ROS_RSLIDAR_POINT_TYPES_H
