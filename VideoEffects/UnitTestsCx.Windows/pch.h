#pragma once

#include "targetver.h"

#include "CppUnitTest.h"

#define _USE_MATH_DEFINES
#include <math.h>

#include <collection.h>
#include <ppltasks.h>
#include <wrl.h>

#include <windows.media.h>

#include <mfapi.h>
#include <mfidl.h>
#include <Mferror.h>

#include "Await.h"

class Log : public std::wostringstream
{
public:
    Log()
    {
    }

    ~Log()
    {
        *this << std::endl;
        ::Microsoft::VisualStudio::CppUnitTestFramework::Logger::WriteMessage(this->str().c_str());
    }
};

