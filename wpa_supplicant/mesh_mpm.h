#ifndef MESH_MPM_H
#define MESH_MPM_H
#include "mesh.h"

/* notify MPM of new mesh peer to be inserted in MPM and driver */
void
wpa_mesh_new_mesh_peer(struct wpa_supplicant *wpa_s, const u8 *addr,
		       struct ieee802_11_elems *elems);
void mesh_mpm_mgmt_rx(struct wpa_supplicant *wpa_s,
		      struct rx_mgmt *rx_mgmt);
void mesh_mpm_action_rx(struct wpa_supplicant *wpa_s,
			const struct ieee80211_mgmt *mgmt,
			size_t len);
void mesh_mpm_deinit(struct wpa_supplicant *wpa_s,
		     struct hostapd_iface *ifmsh);
void mesh_mpm_auth_peer(struct wpa_supplicant *wpa_s, const u8 *addr);

#endif /* MESH_MPM_H */
