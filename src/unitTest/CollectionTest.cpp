// Copyright 2015 <Romain Dambreville>

#include <gmock/gmock.h>
  using ::testing::Eq;
#include <gtest/gtest.h>
  using ::testing::Test;

#include <string>

#include "src/Collection.h"
#include "src/Creature.h"
#include "src/Card.h"
  using std::string;




namespace testing {
class CollectionTest : public Test {
 protected:
CollectionTest() {}
~CollectionTest() {}

virtual void SetUp() {}
virtual void TearDown() {}
Collection list;
};

    TEST_F(CollectionTest, constructor_createsEmptyList) {
        EXPECT_THAT(list.m_cardList.size(), Eq(size_t(0)));
    }

    TEST_F(CollectionTest, add_Card) {
      list.createCard(Creature());
    }

}  // namespace testing

