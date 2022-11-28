/**
 * Copyright (c) 2021 OceanBase
 * OceanBase CE is licensed under Mulan PubL v2.
 * You can use this software according to the terms and conditions of the Mulan PubL v2.
 * You may obtain a copy of Mulan PubL v2 at:
 *          http://license.coscl.org.cn/MulanPubL-2.0
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PubL v2 for more details.
 */

#ifndef OCEANBASE_SRC_PL_SYS_PACKAGE_UTL_I18N_H_
#define OCEANBASE_SRC_PL_SYS_PACKAGE_UTL_I18N_H_
#include "sql/engine/ob_exec_context.h"
#include "share/object/ob_obj_cast.h"

namespace oceanbase
{
namespace pl
{

class ObUtlI18n
{
public:
  static int string_to_raw(sql::ObExecContext &ctx, sql::ParamStore &params, common::ObObj &result);
  static int raw_to_char(sql::ObExecContext &ctx, sql::ParamStore &params, common::ObObj &result);

};

} // end of pl
} // end of oceanbase
#endif /* OCEANBASE_SRC_PL_SYS_PACKAGE_UTL_I18N_H_ */