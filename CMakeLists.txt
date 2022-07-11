cmake_minimum_required(VERSION 3.10) # Проверка версии CMake.
									# Если версия установленой программы
									# старее указаной, произайдёт аварийный выход.

project(2.1_Brackets_in_the_code)				# Название проекта

set(SOURCE_MAIN main.c)			# Установка переменной со списком исходников

include_directories(input)			# Расположение заголовочных файлов
include_directories(stack)			# Расположение заголовочных файлов

add_executable(main ${SOURCE_MAIN})	# Создает исполняемый файл с именем main

add_subdirectory(input)				# Добавление подпроекта, указывается имя дирректории
add_subdirectory(stack)				# Добавление подпроекта, указывается имя дирректории

target_link_libraries(main stack_lb input_lb)		# Линковка программы с библиотекой
