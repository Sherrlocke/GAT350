#pragma once
#include "Types.h"
#include "Ray.h"

class Geometry
{
public:
    Geometry() = default;
    virtual ~Geometry() = default;

    virtual bool Hit(const ray_t& r, float tMin, float tMax, raycasthit_t& hit) = 0;

    std::shared_ptr<Material> material;
    Geometry(std::shared_ptr<Material> material) : material{ material } {}
};