#ifndef __LINUX_NL80211_MULTICAST_H
#define __LINUX_NL80211_MULTICAST_H

#include <linux/types.h>

/* multicast groups */
enum nl80211_multicast_groups {
    NL80211_MCGRP_CONFIG,
    NL80211_MCGRP_SCAN,
    NL80211_MCGRP_REGULATORY,
    NL80211_MCGRP_MLME,
    NL80211_MCGRP_VENDOR,
    NL80211_MCGRP_NAN,
    NL80211_MCGRP_TESTMODE /* keep last - ifdef! */
};

#endif
