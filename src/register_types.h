#ifndef REGISTER_TYPES_HPP
#define REGISTER_TYPES_HPP

#include <godot_cpp/core/class_db.hpp>

using namespace godot;

// Funções de inicialização e finalização do módulo
void initialize_example_module(ModuleInitializationLevel p_level);
void uninitialize_example_module(ModuleInitializationLevel p_level);

#endif // REGISTER_TYPES_HPP