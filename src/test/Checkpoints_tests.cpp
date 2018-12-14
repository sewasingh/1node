// Copyright (c) 2011-2013 The Bitcoin Core developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

//
// Unit tests for block-chain checkpoints
//

#include "checkpoints.h"

#include "uint256.h"

#include <boost/test/unit_test.hpp>

using namespace std;

BOOST_AUTO_TEST_SUITE(Checkpoints_tests)

BOOST_AUTO_TEST_CASE(sanity)
{
    uint256 p0 = uint256("00000f69bd964ff1e36b39aa527110b43d14fd325512ec033a35b91362d2a2d8"); // block 0
    uint256 p1 = uint256("00000f69bd964ff1e36b39aa527110b43d14fd325512ec033a35b91362d2a2d9"); // this has to fail...
    BOOST_CHECK(Checkpoints::CheckBlock(0, p0));
    
    // Wrong hashes at checkpoints should fail:
    BOOST_CHECK(!Checkpoints::CheckBlock(0, p1));

    BOOST_CHECK(Checkpoints::GetTotalBlocksEstimate() >= 0);
}

BOOST_AUTO_TEST_SUITE_END()
