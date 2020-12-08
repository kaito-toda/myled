#incluide <linux/module.h>

statuc int__init init_mod(void)
{
	return 0;
}

static void__exit cleanup_mod(void)
{
}

module_init(init_mod);
module_exit(cleanup_mod);
