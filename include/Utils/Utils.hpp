#pragma once

#ifdef DLL
    #define Hook DLL
#else
    #define Hook
#endif

#include "Exceptions/ErrorInfo.hpp"
#include "result/include/result.hpp"

#include "Action.hpp"
#include "Concepts.hpp"
#include "Singleton.hpp"
#include "Typedefs.hpp"

#include "StringUtils.hpp"

#include "MemUtils.hpp"
#include "TimeUtils.hpp"

#include "TemplateHelpers.hpp"

#undef Hook
