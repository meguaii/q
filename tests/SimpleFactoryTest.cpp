#include <gtest/gtest.h>
#include "../src/SimpleFactory.h"

TEST(SimpleFactoryTest, CreateProductA) {
    auto product = SimpleFactory::createProduct('A');
    ASSERT_NE(product, nullptr);
    EXPECT_EQ(product->getName(), "ProductA");
}

TEST(SimpleFactoryTest, CreateProductB) {
    auto product = SimpleFactory::createProduct('B');
    ASSERT_NE(product, nullptr);
    EXPECT_EQ(product->getName(), "ProductB");
}

TEST(SimpleFactoryTest, CreateUnknownProduct) {
    auto product = SimpleFactory::createProduct('X');
    ASSERT_EQ(product, nullptr);
}

