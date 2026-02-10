#include "simple_node.h"
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

void SimpleNode::_bind_methods() {
    // Registra a propriedade "speed" para aparecer no Inspector do Godot
    ClassDB::bind_method(D_METHOD("get_speed"), &SimpleNode::get_speed);
    ClassDB::bind_method(D_METHOD("set_speed", "p_speed"), &SimpleNode::set_speed);
    
    ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "speed"), "set_speed", "get_speed");
}

SimpleNode::SimpleNode() {
    time_passed = 0.0;
    speed = 1.0;
}

SimpleNode::~SimpleNode() {}

void SimpleNode::_process(double delta) {
    time_passed += speed * delta;
    
    Vector3 new_rotation = Vector3(0, time_passed, 0);
    set_rotation(new_rotation);
}

void SimpleNode::set_speed(const double p_speed) { speed = p_speed; }
double SimpleNode::get_speed() const { return speed; }