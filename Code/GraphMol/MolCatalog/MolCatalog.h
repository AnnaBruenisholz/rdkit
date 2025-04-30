//
//  Copyright (C) 2006 Greg Landrum
//
//
#include <RDGeneral/export.h>
#ifndef RD_MOL_CATALOG_H
#define RD_MOL_CATALOG_H

#include <Catalogs/Catalog.h>
#include <GraphMol/MolCatalog/MolCatalogEntry.h>
#include <GraphMol/MolCatalog/MolCatalogParams.h>

namespace RDKit {

//! a hierarchical catalog for holding molecules
typedef RDCatalog::HierarchCatalog<MolCatalogEntry, MolCatalogParams, int>
    MolCatalog;
}  // namespace RDKit

#endif
