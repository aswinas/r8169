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
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x568fba06, "module_layout" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0xf59f197, "param_array_ops" },
	{ 0xd48c94a0, "eth_change_mtu" },
	{ 0x8b2fe2f6, "eth_validate_addr" },
	{ 0x825b85f9, "eth_mac_addr" },
	{ 0x4a9a412a, "unregister_netdev" },
	{ 0x3d81b477, "consume_skb" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0x51c2c913, "__netif_schedule" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xbad3291a, "netif_rx" },
	{ 0xe7390cd6, "eth_type_trans" },
	{ 0xfac00f33, "skb_put" },
	{ 0xb290ab80, "dev_alloc_skb" },
	{ 0xbe2c0274, "add_timer" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x92ea4ae4, "crc32_le" },
	{ 0xf15b2d04, "free_netdev" },
	{ 0x69a2274d, "register_netdev" },
	{ 0xc70195f6, "alloc_etherdev_mqs" },
	{ 0x27e1a049, "printk" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

