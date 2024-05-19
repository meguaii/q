cmake_minimum_required(VERSION 3.10)
project(SimpleFactory)

set(CMAKE_CXX_STANDARD 17)

# Основной исполняемый файл
add_executable(SimpleFactoryExecutable src/Program.cpp src/ConceptualExample.cpp src/Pizza.cpp src/Documents.cpp src/Points.cpp src/MobilePhones.cpp)

# Google Test
enable_testing()

# Добавляем поддиректорию для Google Test
add_subdirectory(lib/googletest)

# Включаем директории для Google Test
include_directories(lib/googletest/googletest/include)

# Создаем исполняемый файл для тестов
add_executable(SimpleFactoryTests tests/SimpleFactoryTest.cpp src/SimpleFactory.cpp)

# Линкуем библиотеки Google Test с тестовым исполняемым файлом
target_link_libraries(SimpleFactoryTests gtest gtest_main)

# Добавляем тест
add_test(NAME SimpleFactoryTests COMMAND SimpleFactoryTests)

# Указываем пути к заголовочным файлам для исполняемых файлов
target_include_directories(SimpleFactoryExecutable PRIVATE src)
target_include_directories(SimpleFactoryTests PRIVATE src)
