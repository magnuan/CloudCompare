#ifndef CLOUDCOMPAREPROJECTS_COMPATIBILITY_H
#define CLOUDCOMPAREPROJECTS_COMPATIBILITY_H

#include <pdal/io/LasHeader.hpp>
#include <pdal/pdal_features.hpp>

inline bool Has14PointFormat(const pdal::LasHeader &header) {
#if PDAL_VERSION_MINOR <= 2
    return header.has14Format();
#else
  return header.has14PointFormat();
#endif
}

#endif // CLOUDCOMPAREPROJECTS_COMPATIBILITY_H
