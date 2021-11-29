#define TABLE_LENGTH 199

// secORB: Valid uORB topics
const char* uORBLists[TABLE_LENGTH]{
    "action_request", 
    "actuator_armed", 
    "actuator_controls", 
    "actuator_controls_0", 
    "actuator_controls_1", 
    "actuator_controls_2", 
    "actuator_controls_3", 
    "actuator_controls_status", 
    "actuator_controls_status_0", 
    "actuator_controls_status_1", 
    "actuator_controls_virtual_fw", 
    "actuator_controls_virtual_mc", 
    "actuator_motors", 
    "actuator_outputs", 
    "actuator_servos", 
    "adc_report", 
    "airspeed", 
    "airspeed_validated", 
    "airspeed_wind", 
    "autotune_attitude_control_status", 
    "battery_status", 
    "camera_capture", 
    "camera_status", 
    "camera_trigger", 
    "cellular_status", 
    "collision_constraints", 
    "collision_report", 
    "commander_state", 
    "control_allocator_status", 
    "cpuload", 
    "debug_array", 
    "debug_key_value", 
    "debug_value", 
    "debug_vect", 
    "differential_pressure", 
    "distance_sensor", 
    "ekf2_timestamps", 
    "ekf_gps_drift", 
    "esc_report", 
    "esc_status", 
    "estimator_attitude", 
    "estimator_baro_bias", 
    "estimator_event_flags", 
    "estimator_global_position", 
    "estimator_innovation_test_ratios", 
    "estimator_innovation_variances", 
    "estimator_innovations", 
    "estimator_local_position", 
    "estimator_odometry", 
    "estimator_optical_flow_vel", 
    "estimator_selector_status", 
    "estimator_sensor_bias", 
    "estimator_states", 
    "estimator_status", 
    "estimator_status_flags", 
    "estimator_visual_odometry_aligned", 
    "estimator_wind", 
    "event", 
    "failure_detector_status", 
    "follow_target", 
    "fw_virtual_attitude_setpoint", 
    "generator_status", 
    "geofence_result", 
    "gimbal_device_attitude_status", 
    "gimbal_device_information", 
    "gimbal_device_set_attitude", 
    "gimbal_manager_information", 
    "gimbal_manager_set_attitude", 
    "gimbal_manager_set_manual_control", 
    "gimbal_manager_status", 
    "gps_dump", 
    "gps_inject_data", 
    "heater_status", 
    "home_position", 
    "hover_thrust_estimate", 
    "input_rc", 
    "internal_combustion_engine_status", 
    "iridiumsbd_status", 
    "irlock_report", 
    "landing_gear", 
    "landing_target_innovations", 
    "landing_target_pose", 
    "led_control", 
    "log_message", 
    "logger_status", 
    "mag_worker_data", 
    "magnetometer_bias_estimate", 
    "manual_control_input", 
    "manual_control_setpoint", 
    "manual_control_switches", 
    "mavlink_log", 
    "mc_virtual_attitude_setpoint", 
    "mission", 
    "mission_result", 
    "mount_orientation", 
    "navigator_mission_item", 
    "obstacle_distance", 
    "obstacle_distance_fused", 
    "offboard_control_mode", 
    "onboard_computer_status", 
    "optical_flow", 
    "orb_multitest", 
    "orb_test", 
    "orb_test_large", 
    "orb_test_medium", 
    "orb_test_medium_multi", 
    "orb_test_medium_queue", 
    "orb_test_medium_queue_poll", 
    "orb_test_medium_wrap_around", 
    "orbit_status", 
    "parameter_update", 
    "ping", 
    "position_controller_landing_status", 
    "position_controller_status", 
    "position_setpoint", 
    "position_setpoint_triplet", 
    "power_button_state", 
    "power_monitor", 
    "pwm_input", 
    "px4io_status", 
    "radio_status", 
    "rate_ctrl_status", 
    "rc_channels", 
    "rc_parameter_map", 
    "rpm", 
    "rtl_flight_time", 
    "safety", 
    "satellite_info", 
    "sensor_accel", 
    "sensor_accel_fifo", 
    "sensor_baro", 
    "sensor_combined", 
    "sensor_correction", 
    "sensor_gps", 
    "sensor_gyro", 
    "sensor_gyro_fft", 
    "sensor_gyro_fifo", 
    "sensor_mag", 
    "sensor_preflight_mag", 
    "sensor_selection", 
    "sensors_status_imu", 
    "system_power", 
    "takeoff_status", 
    "task_stack_info", 
    "tecs_status", 
    "telemetry_status", 
    "test_motor", 
    "timesync", 
    "timesync_status", 
    "trajectory_bezier", 
    "trajectory_setpoint", 
    "trajectory_waypoint", 
    "transponder_report", 
    "tune_control", 
    "uavcan_parameter_request", 
    "uavcan_parameter_value", 
    "ulog_stream", 
    "ulog_stream_ack", 
    "vehicle_acceleration", 
    "vehicle_actuator_setpoint", 
    "vehicle_air_data", 
    "vehicle_angular_acceleration", 
    "vehicle_angular_acceleration_setpoint", 
    "vehicle_angular_velocity", 
    "vehicle_angular_velocity_groundtruth", 
    "vehicle_attitude", 
    "vehicle_attitude_groundtruth", 
    "vehicle_attitude_setpoint", 
    "vehicle_command", 
    "vehicle_command_ack", 
    "vehicle_constraints", 
    "vehicle_control_mode", 
    "vehicle_global_position", 
    "vehicle_global_position_groundtruth", 
    "vehicle_gps_position", 
    "vehicle_imu", 
    "vehicle_imu_status", 
    "vehicle_land_detected", 
    "vehicle_local_position", 
    "vehicle_local_position_groundtruth", 
    "vehicle_local_position_setpoint", 
    "vehicle_magnetometer", 
    "vehicle_mocap_odometry", 
    "vehicle_odometry", 
    "vehicle_rates_setpoint", 
    "vehicle_roi", 
    "vehicle_status", 
    "vehicle_status_flags", 
    "vehicle_thrust_setpoint", 
    "vehicle_torque_setpoint", 
    "vehicle_trajectory_bezier", 
    "vehicle_trajectory_waypoint", 
    "vehicle_trajectory_waypoint_desired", 
    "vehicle_vision_attitude", 
    "vehicle_visual_odometry", 
    "vtol_vehicle_status", 
    "wheel_encoders", 
    "wind", 
    "yaw_estimator_status"
};

int search(const char* target){
    for(int i=0; i<TABLE_LENGTH; i++){
        if(strcmp(target, uORBLists[i]) == 0)
            return 1;
    }
    return 0;
}