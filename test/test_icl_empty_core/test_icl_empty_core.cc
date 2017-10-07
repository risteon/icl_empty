// -- BEGIN LICENSE BLOCK ----------------------------------------------
// -- END LICENSE BLOCK ------------------------------------------------
//----------------------------------------------------------------------
/*!\file
 *
 * \author  Christoph Rist <christoph_bernd.rist@daimler.com>
 * \date    2017-09-20
 *
 */
//----------------------------------------------------------------------

#include <icl_empty_core/demo.h>

#include "gtest/gtest.h"


TEST(test_icl_empty_core, demo)
{
  using namespace icl_empty::core;
  Foo f{};
  EXPECT_EQ(42, f.test());
}
