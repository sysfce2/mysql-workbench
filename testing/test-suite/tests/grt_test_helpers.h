/*
 * Copyright (c) 2019, Oracle and/or its affiliates. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2.0,
 * as published by the Free Software Foundation.
 *
 * This program is designed to work with certain software (including
 * but not limited to OpenSSL) that is licensed under separate terms, as
 * designated in a particular file or component or in included license
 * documentation.  The authors of MySQL hereby grant you an additional
 * permission to link the program and your derivative works with the
 * separately licensed software that they have either included with
 * the program or referenced in the documentation.
 * This program is distributed in the hope that it will be useful,  but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See
 * the GNU General Public License, version 2.0, for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA 
 */

#pragma once

#include "grt.h"

#include "grts/structs.db.mysql.h"

#include "common.h"
#include "expect.h"

namespace bec {
  class TreeModel;
}

namespace casmine {

void deepCompareGrtValues(std::string const& major_msg, const grt::ValueRef &actual, const grt::ValueRef &expected,
                          bool compare_obj_id = false, std::list<std::string> *followed_obj_stack = nullptr);

void dumpTreeModel(const std::string &path, bec::TreeModel *tree, const std::vector<ssize_t> &columns,
                   bool dump_type = false);

struct GrtEnvironment : casmine::EnvironmentBase {
};

}
