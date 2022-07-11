cmake_minimum_required(VERSION 3.10) # Проверка версии CMake.
									# Если версия установленой программы
									# старее указаной, произайдёт аварийный выход.

project(input_pr)				# Название проекта

set(SOURCE_LIB input.c)		# Установка переменной со списком исходников

add_library(input_lb STATIC ${SOURCE_LIB})# Создание статической библиотеки