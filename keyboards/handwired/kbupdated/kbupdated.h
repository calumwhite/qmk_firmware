#ifndef KBUPDATED_H
#define KBUPDATED_H

#include "quantum.h"

#define LAYOUT(K00, K01, K02, K03, K04, K05, K06, K07, K002, K003, K004, K005, K006, K007, K008, K009, K11, K12, K13, K14, K15, K16, K17, K102, K103, K104, K105, K106, K107, K108, K109, K20, K21, K22, K23, K24, K25, K26, K27, K28, K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K30, K31, K32, K33, K34, K35, K36, K37, K38, K300, K301, K302, K303, K304, K305, K306, K307, K308) \
    {                                                                                                                                                                                                                                                                                                                                                                                                 \
        {K00, K01, K02, K03, K04, K05, K06, K07, KC_NO, KC_NO, KC_NO, K002, K003, K004, K005, K006, K007, K008, K009},
{KC_NO, K11, K12, K13, K14, K15, K16, K17, KC_NO, KC_NO, KC_NO, K102, K103, K104, K105, K106, K107, K108, K109} {K20, K21, K22, K23, K24, K25, K26, K27, K28, K200, K201, K202, K203, K204, K205, K206, K207, K208, K209}, {
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K300, K301, K302, K303, K304, K305, K306, K307, K308, KC_NO
}
}

#endif
