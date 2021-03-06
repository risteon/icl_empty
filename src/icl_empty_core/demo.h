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

#ifndef ICL_EMPTY_ICL_EMPTY_CORE_DEMO_H
#define ICL_EMPTY_ICL_EMPTY_CORE_DEMO_H

#include <cstdint>

namespace icl_empty {
namespace core {

class Foo
{
public:
  void hello() const;
  int32_t test() const  { return 42; }
};


} //< ns core
} //< ns icl_empty

#endif //< ICL_EMPTY_ICL_EMPTY_CORE_DEMO_H
