#pragma once

#if defined(__redox__)
#  include "pal_posix.h"

namespace snmalloc
{
  /**
   * redox platform abstraction layer.
   *
   */
  class PALRedox : public PALPOSIX<PALRedox>
  {
  public:
    /**
     * The features exported by this PAL.
     *
     */
    static constexpr uint64_t pal_features = PALPOSIX::pal_features;
  };
} // namespace snmalloc
#endif
