#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0x89e24b9c, "struct_module" },
	{ 0xf38505e, "register_netdevice" },
	{ 0x61bed476, "up_read" },
	{ 0x9d776389, "unregister_netdevice" },
	{ 0x89b301d4, "param_get_int" },
	{ 0xcc4c11a9, "_write_unlock_bh" },
	{ 0x3d7c39ea, "_read_lock" },
	{ 0x35009965, "ip_route_output_key" },
	{ 0x3e45e9ff, "register_inetaddr_notifier" },
	{ 0x2e5d0ae2, "seq_open" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xab978df6, "malloc_sizes" },
	{ 0xdd7b7024, "seq_puts" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x772274b1, "netif_carrier_on" },
	{ 0xc4f02fe7, "skb_clone" },
	{ 0x8b61da01, "dev_get_by_name" },
	{ 0x14990642, "skb_copy" },
	{ 0xeafa9974, "ethtool_op_get_sg" },
	{ 0x806d5133, "param_array_get" },
	{ 0x669e2d2f, "seq_printf" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x87b6fae2, "netif_carrier_off" },
	{ 0x5d57df57, "remove_proc_entry" },
	{ 0xce19bac5, "register_inet6addr_notifier" },
	{ 0x1ab0f38, "dev_base_lock" },
	{ 0x6823fb77, "dev_set_allmulti" },
	{ 0x4e830a3e, "strnicmp" },
	{ 0xf2c1af01, "netpoll_poll_dev" },
	{ 0x174e1087, "call_netdevice_notifiers" },
	{ 0xfb1d0a92, "alloc_netdev" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xf320df50, "skb_realloc_headroom" },
	{ 0x89cef6fb, "param_array_set" },
	{ 0xf98c26e5, "seq_read" },
	{ 0x205df08d, "sysfs_remove_group" },
	{ 0x7d11c268, "jiffies" },
	{ 0x343a1a8, "__list_add" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0x1985af2a, "down_read" },
	{ 0x866b0cfb, "dev_mc_add" },
	{ 0x4efd93a9, "__create_workqueue" },
	{ 0x50648651, "__pskb_pull_tail" },
	{ 0x794075ed, "netpoll_send_skb_on_dev" },
	{ 0x538383c0, "unregister_inet6addr_notifier" },
	{ 0xaa136450, "param_get_charp" },
	{ 0xc659d5a, "del_timer_sync" },
	{ 0xfb5ba987, "dev_set_mac_address" },
	{ 0x6315b09, "proc_mkdir" },
	{ 0x21968b7f, "_read_lock_bh" },
	{ 0xe987619e, "proc_net" },
	{ 0x8d3894f2, "_ctype" },
	{ 0x93ba42f1, "_write_lock_bh" },
	{ 0x14e26b79, "arp_create" },
	{ 0x1b7d4074, "printk" },
	{ 0xb9534dcf, "ethtool_op_get_link" },
	{ 0x859204af, "sscanf" },
	{ 0x612e3f27, "sysfs_create_group" },
	{ 0x5152e605, "memcmp" },
	{ 0x608b5e1a, "ndisc_send_skb" },
	{ 0x65414e67, "dev_valid_name" },
	{ 0x15e074de, "free_netdev" },
	{ 0x2da418b5, "copy_to_user" },
	{ 0xb1ddd1b, "destroy_workqueue" },
	{ 0xc60723d8, "dev_close" },
	{ 0x521445b, "list_del" },
	{ 0xd5d1d27e, "dev_remove_pack" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xb0c7c079, "sysfs_remove_link" },
	{ 0xde0c05c3, "up_write" },
	{ 0xbca92367, "down_write" },
	{ 0xc7346ba, "flush_workqueue" },
	{ 0x57a81275, "dev_mc_delete" },
	{ 0x6f4ab80c, "dev_open" },
	{ 0xbbc2e1fa, "ethtool_op_get_ufo" },
	{ 0xc785ba94, "sysfs_create_link" },
	{ 0x1c53db6e, "skb_over_panic" },
	{ 0x7dceceac, "capable" },
	{ 0x4b05104f, "_write_lock" },
	{ 0x19070091, "kmem_cache_alloc" },
	{ 0x9aebf873, "__alloc_skb" },
	{ 0x760b437a, "unregister_inetaddr_notifier" },
	{ 0x89d282ea, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xb08e0988, "skb_under_panic" },
	{ 0x9a8c8f5c, "arp_xmit" },
	{ 0xd5028665, "create_proc_entry" },
	{ 0x8bf46c54, "_read_unlock_bh" },
	{ 0xad97dcd, "ether_setup" },
	{ 0x416983d9, "netdev_fix_features" },
	{ 0xb5c2162, "netdev_set_master" },
	{ 0xd0b91f9b, "init_timer" },
	{ 0x2cd7da6c, "param_set_charp" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb85ab97a, "kmem_cache_zalloc" },
	{ 0xe32e66b5, "_spin_unlock_bh" },
	{ 0x8ea8a3d5, "seq_lseek" },
	{ 0x293c5626, "in6_dev_finish_destroy" },
	{ 0xf1d708b1, "netdev_bonding_change" },
	{ 0xe77a8dd8, "dev_set_promiscuity" },
	{ 0x68626b1b, "ndisc_build_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e60bace, "memcpy" },
	{ 0x1bfc3aa6, "netdev_class_create_file" },
	{ 0x752c82da, "dev_alloc_name" },
	{ 0x6269b924, "ethtool_op_get_tx_csum" },
	{ 0x7270e5a2, "ip_mc_rejoin_group" },
	{ 0x62e86145, "ethtool_op_get_tso" },
	{ 0x25da070, "snprintf" },
	{ 0xb5d5e660, "dev_add_pack" },
	{ 0xf4e1d60e, "seq_release" },
	{ 0x8235805b, "memmove" },
	{ 0xf767f95f, "consume_skb" },
	{ 0x10818a0c, "dev_queue_xmit" },
	{ 0x6943ea4b, "_spin_lock_bh" },
	{ 0xf2a644fb, "copy_from_user" },
	{ 0xf1f0ab07, "__init_rwsem" },
	{ 0x4a4e15af, "queue_delayed_work" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xb22fe6a3, "netdev_increment_features" },
	{ 0x147ced24, "dev_set_mtu" },
	{ 0x5143fac, "netdev_class_remove_file" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "5DC5B6A3110D085061C3DFE");
