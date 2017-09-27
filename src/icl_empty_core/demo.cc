// -- BEGIN LICENSE BLOCK ----------------------------------------------
// -- END LICENSE BLOCK ------------------------------------------------
//----------------------------------------------------------------------
/*!\file
 *
 * \author  Christoph Rist <christoph_bernd.rist@daimler.com>
 * \date    2017-09-24
 *
 */
//----------------------------------------------------------------------

#include "demo.h"

#include <iostream>

namespace icl_empty {
namespace core {


void Foo::hello() const
{
  std::cout << "Hello, world.\n";
}


} //< ns core
} //< ns icl_empty
