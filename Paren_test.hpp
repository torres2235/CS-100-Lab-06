#ifndef __PAREN_TEST_HPP__
#define __PAREN_TEST_HPP__

#include <vector>
#include <math.h>

#include "Paren.hpp"
#include "lab-05/container.hpp"
#include "lab-04/add.hpp"
#include "lab-04/sub.hpp"
#include "lab-04/mult.hpp"
#include "lab-04/div.hpp"
#include "lab-04/op.hpp"
#include "lab-04/base.hpp"

#include "gtest/gtest.h"

TEST(ParenTest, StringifyElement) {
        Op* one = new Op(1.5);
        Paren* tester = new Paren(one);
        EXPECT_EQ(tester->stringify(), "(1.5)");
}

#endif //__PAREN_TEST_HPP__
