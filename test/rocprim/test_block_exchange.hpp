// MIT License
//
// Copyright (c) 2017-2020 Advanced Micro Devices, Inc. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

test_suite_type_def(suite_name, name_suffix)

typed_test_suite_def(suite_name, name_suffix, block_params);

typed_test_def(suite_name, name_suffix, BlockedToStriped)
{
    using type = typename TestFixture::params::input_type;
    using output_type = typename TestFixture::params::output_type;
    constexpr size_t block_size = TestFixture::params::block_size;

    static_for<0, 4, type, output_type, 0, block_size>::run();
}

typed_test_def(suite_name, name_suffix, StripedToBlocked)
{
    using type = typename TestFixture::params::input_type;
    using output_type = typename TestFixture::params::output_type;
    constexpr size_t block_size = TestFixture::params::block_size;

    static_for<0, 4, type, output_type, 1, block_size>::run();
}

typed_test_def(suite_name, name_suffix, BlockedToWarpStriped)
{
    using type = typename TestFixture::params::input_type;
    using output_type = typename TestFixture::params::output_type;
    constexpr size_t block_size = TestFixture::params::block_size;

    static_for<0, 4, type, output_type, 2, block_size>::run();
}

typed_test_def(suite_name, name_suffix, WarpStripedToBlocked)
{
    using type = typename TestFixture::params::input_type;
    using output_type = typename TestFixture::params::output_type;
    constexpr size_t block_size = TestFixture::params::block_size;

    static_for<0, 4, type, output_type, 3, block_size>::run();
}

typed_test_def(suite_name, name_suffix, ScatterToBlocked)
{
    using type = typename TestFixture::params::input_type;
    using output_type = typename TestFixture::params::output_type;
    constexpr size_t block_size = TestFixture::params::block_size;

    static_for<0, 4, type, output_type, 4, block_size>::run();
}

typed_test_def(suite_name, name_suffix, ScatterToStriped)
{
    using type = typename TestFixture::params::input_type;
    using output_type = typename TestFixture::params::output_type;
    constexpr size_t block_size = TestFixture::params::block_size;

    static_for<0, 4, type, output_type, 5, block_size>::run();
}
