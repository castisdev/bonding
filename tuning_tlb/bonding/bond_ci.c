

static void write_file(char *data)
{
	char			*filename = "bond_log.dat";
	int				fd;
	loff_t 			pos		=	0;
	struct file		*filp;
	mm_segment_t	old_fs	=	get_fs();

	set_fs(KERNEL_DS);

	fd = sys_open(filename, ORWONLY|O_CREAT, 0644);
	if(fd >= 0)
	{
		filp = fget(fd);
		if(filp)
		{
			vfs_write(file, data, strlen(data), &pos);
			fput(file);
		}
	}

	set_fs(old_fs);
}
