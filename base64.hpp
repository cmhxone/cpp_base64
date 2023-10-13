// ----------------------------------------------------------------------------
// Copyright (C) 2023 Cho Mu Hyeon
//
// Author: Cho Mu Hyeon
// ----------------------------------------------------------------------------
#pragma once

#include <string>
#include <string_view>
#include <vector>

namespace util
{
    namespace base64
    {
        static std::string BASE64_CHAR = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                                         "abcdefghijklmnopqrstuvwxyz"
                                         "0123456789+/";

        /**
         * Base64 인코드
         */
        std::string encode(const std::vector<unsigned char> &input);

        /**
         * Base64 디코드
         */
        std::vector<unsigned char> decode(const std::string_view input);

    }
}