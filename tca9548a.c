void i2c_mux(uint8_t bus){
	uint8_t data;
	data = 1 << bus;
	HAL_I2C_Master_Transmit(&hi2c1, 0x70<<1, data, 1, 100);
}
