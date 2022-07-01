#include <memory>

#include "lifecycle_template/lifecycle_template.hpp"
#include "rclcpp/rclcpp.hpp"

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<sample::LifecycleTemplate>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  
  return 0;
}
