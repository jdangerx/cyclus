#ifndef CYCLUS_SRC_TOOLKIT_RES_MANIP_H_
#define CYCLUS_SRC_TOOLKIT_RES_MANIP_H_

#include "material.h"
#include "resource.h"
#include "product.h"

namespace cyclus {
namespace toolkit {

/// Squash combines all products in ps and returns the resulting single
/// product.
Product::Ptr Squash(std::vector<Product::Ptr> ps);

/// Squash combines all materials in ms and returns the resulting single
/// material.
Material::Ptr Squash(std::vector<Material::Ptr> ms);

/// Squash combines all resources in rs and returns the resulting single
/// resource.
Resource::Ptr Squash(std::vector<Resource::Ptr> rs);

/// Casts a vector of Materials into a vector of Resources.
std::vector<Resource::Ptr> ResCast(std::vector<Material::Ptr> rs);

/// Casts a vector of Products into a vector of Resources.
std::vector<Resource::Ptr> ResCast(std::vector<Product::Ptr> rs);

}  // namespace toolkit
}  // namespace cyclus

#endif  // CYCLUS_SRC_TOOLKIT_RES_MANIP_H_
