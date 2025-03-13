#include <stdio.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/i2c-dev.h>
#include <i2c/smbus.h>

static int registers_write(int fd, uint8_t slave_address, uint8_t register, uint8_t * payload, int size) {
	int ret = ioctl(fd, I2C_SLAVE, slave_address);

	ret = write(fd, payload, size);
}

static int registers_read(int fd, uint8_t slave_address, uint8_t regs, uint8_t * buffer, int size) {

	struct i2c_rdwr_ioctl_data i2c_data;
	struct i2c_msg[2];

	uint8_t reg = regs;

	//Write
	msgs[0].addr = slave_address;
	msgs[0].flags = 0;
	msgs[0].len = 1;
	msgs[0].buf = &regs;
	
	// read
	msgs[1].addr = slave_address;
	msgs[1].flags = I2C_M_RD;
	msgs[1].len = size;
	msgs[1].buf = buffer;

	i2c_data.msgs = m;
}

int main(int argc, char * argv[]) {
	

	return 0;
	
}
