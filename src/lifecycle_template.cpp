#include "lifecycle_template/lifecycle_template.hpp"

namespace sample
{

// ========== コンストラクタ ========== //
LifecycleTemplate::LifecycleTemplate(
  const std::string& node_name,
  const std::string& ns,
  const rclcpp::NodeOptions& options
): rclcpp_lifecycle::LifecycleNode(node_name, ns, options)
{

}

// ========== デストラクタ ========== //
LifecycleTemplate::~LifecycleTemplate()
{
  RCLCPP_INFO(this->get_logger(), "Destroying");
  
}

// ========== Configure ========== //
CallbackReturn LifecycleTemplate::on_configure(const rclcpp_lifecycle::State &)
{
  RCLCPP_INFO(this->get_logger(), "on_configure() was called.");
  
  return CallbackReturn::SUCCESS;
}

// ========== Activate ========== //
CallbackReturn LifecycleTemplate::on_activate(const rclcpp_lifecycle::State &)
{
  RCLCPP_INFO(this->get_logger(), "on_activate() was called.");
  
  return CallbackReturn::SUCCESS;
}

// ========== Deactivate ========== //
CallbackReturn LifecycleTemplate::on_deactivate(const rclcpp_lifecycle::State &)
{
  RCLCPP_INFO(this->get_logger(), "on_deactivate() was called.");
  
  return CallbackReturn::SUCCESS;
}

// ========== Cleanup ========== //
CallbackReturn LifecycleTemplate::on_cleanup(const rclcpp_lifecycle::State &)
{
  RCLCPP_INFO(this->get_logger(), "on_cleanup() was called.");
  
  return CallbackReturn::SUCCESS;
}

// ========== Shutdown ========== //
CallbackReturn LifecycleTemplate::on_shutdown(const rclcpp_lifecycle::State &)
{
  RCLCPP_INFO(this->get_logger(), "on_shutdown() was called.");
  
  return CallbackReturn::SUCCESS;
}

} // namespace sample
