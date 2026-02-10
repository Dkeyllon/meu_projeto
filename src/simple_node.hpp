#ifndef SIMPLE_NODE_H
#define SIMPLE_NODE_H

#include <godot_cpp/classes/node3d.hpp>

namespace godot {

class SimpleNode : public Node3D {
    GDCLASS(SimpleNode, Node3D)

private:
    double time_passed;
    double speed;

protected:
    static void _bind_methods(); // Onde a "mágica" da exportação acontece

public:
    SimpleNode();
    ~SimpleNode();

    void _process(double delta) override;
    
    // Getters e Setters para o Editor
    void set_speed(const double p_speed);
    double get_speed() const;
};

}

#endif