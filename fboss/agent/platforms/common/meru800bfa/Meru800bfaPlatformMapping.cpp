/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include "fboss/agent/platforms/common/meru800bfa/Meru800bfaPlatformMapping.h"

namespace facebook::fboss {
namespace {
constexpr auto kJsonPlatformMappingStr = R"(
{
  "ports": {
    "0": {
      "mapping": {
        "id": 0,
        "name": "fab1/1/1",
        "controllingPort": 0,
        "pins": [
          {
            "a": {
              "chip": "BC63",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/1",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC63",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/1",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC63",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/1",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "1": {
      "mapping": {
        "id": 1,
        "name": "fab1/1/2",
        "controllingPort": 1,
        "pins": [
          {
            "a": {
              "chip": "BC0",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/1",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC0",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/1",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC0",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/1",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "2": {
      "mapping": {
        "id": 2,
        "name": "fab1/1/3",
        "controllingPort": 2,
        "pins": [
          {
            "a": {
              "chip": "BC63",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/1",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC63",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/1",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC63",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/1",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "3": {
      "mapping": {
        "id": 3,
        "name": "fab1/1/4",
        "controllingPort": 3,
        "pins": [
          {
            "a": {
              "chip": "BC0",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/1",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC0",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/1",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC0",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/1",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "4": {
      "mapping": {
        "id": 4,
        "name": "fab1/1/5",
        "controllingPort": 4,
        "pins": [
          {
            "a": {
              "chip": "BC62",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/1",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC62",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/1",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC62",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/1",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "5": {
      "mapping": {
        "id": 5,
        "name": "fab1/1/6",
        "controllingPort": 5,
        "pins": [
          {
            "a": {
              "chip": "BC1",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/1",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC1",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/1",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC1",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/1",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "6": {
      "mapping": {
        "id": 6,
        "name": "fab1/1/7",
        "controllingPort": 6,
        "pins": [
          {
            "a": {
              "chip": "BC62",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/1",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC62",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/1",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC62",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/1",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "7": {
      "mapping": {
        "id": 7,
        "name": "fab1/1/8",
        "controllingPort": 7,
        "pins": [
          {
            "a": {
              "chip": "BC1",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/1",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC1",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/1",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC1",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/1",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "8": {
      "mapping": {
        "id": 8,
        "name": "fab1/2/1",
        "controllingPort": 8,
        "pins": [
          {
            "a": {
              "chip": "BC61",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/2",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC61",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/2",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC61",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/2",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "9": {
      "mapping": {
        "id": 9,
        "name": "fab1/2/2",
        "controllingPort": 9,
        "pins": [
          {
            "a": {
              "chip": "BC2",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/2",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC2",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/2",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC2",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/2",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "10": {
      "mapping": {
        "id": 10,
        "name": "fab1/2/3",
        "controllingPort": 10,
        "pins": [
          {
            "a": {
              "chip": "BC61",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/2",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC61",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/2",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC61",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/2",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "11": {
      "mapping": {
        "id": 11,
        "name": "fab1/2/4",
        "controllingPort": 11,
        "pins": [
          {
            "a": {
              "chip": "BC2",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/2",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC2",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/2",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC2",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/2",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "12": {
      "mapping": {
        "id": 12,
        "name": "fab1/2/5",
        "controllingPort": 12,
        "pins": [
          {
            "a": {
              "chip": "BC60",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/2",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC60",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/2",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC60",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/2",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "13": {
      "mapping": {
        "id": 13,
        "name": "fab1/2/6",
        "controllingPort": 13,
        "pins": [
          {
            "a": {
              "chip": "BC3",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/2",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC3",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/2",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC3",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/2",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "14": {
      "mapping": {
        "id": 14,
        "name": "fab1/2/7",
        "controllingPort": 14,
        "pins": [
          {
            "a": {
              "chip": "BC60",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/2",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC60",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/2",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC60",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/2",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "15": {
      "mapping": {
        "id": 15,
        "name": "fab1/2/8",
        "controllingPort": 15,
        "pins": [
          {
            "a": {
              "chip": "BC3",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/2",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC3",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/2",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC3",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/2",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "16": {
      "mapping": {
        "id": 16,
        "name": "fab1/3/1",
        "controllingPort": 16,
        "pins": [
          {
            "a": {
              "chip": "BC63",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/3",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC63",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/3",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC63",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/3",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "17": {
      "mapping": {
        "id": 17,
        "name": "fab1/3/2",
        "controllingPort": 17,
        "pins": [
          {
            "a": {
              "chip": "BC0",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/3",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC0",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/3",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC0",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/3",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "18": {
      "mapping": {
        "id": 18,
        "name": "fab1/3/3",
        "controllingPort": 18,
        "pins": [
          {
            "a": {
              "chip": "BC63",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/3",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC63",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/3",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC63",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/3",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "19": {
      "mapping": {
        "id": 19,
        "name": "fab1/3/4",
        "controllingPort": 19,
        "pins": [
          {
            "a": {
              "chip": "BC0",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/3",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC0",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/3",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC0",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/3",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "20": {
      "mapping": {
        "id": 20,
        "name": "fab1/3/5",
        "controllingPort": 20,
        "pins": [
          {
            "a": {
              "chip": "BC62",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/3",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC62",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/3",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC62",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/3",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "21": {
      "mapping": {
        "id": 21,
        "name": "fab1/3/6",
        "controllingPort": 21,
        "pins": [
          {
            "a": {
              "chip": "BC1",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/3",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC1",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/3",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC1",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/3",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "22": {
      "mapping": {
        "id": 22,
        "name": "fab1/3/7",
        "controllingPort": 22,
        "pins": [
          {
            "a": {
              "chip": "BC62",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/3",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC62",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/3",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC62",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/3",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "23": {
      "mapping": {
        "id": 23,
        "name": "fab1/3/8",
        "controllingPort": 23,
        "pins": [
          {
            "a": {
              "chip": "BC1",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/3",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC1",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/3",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC1",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/3",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "24": {
      "mapping": {
        "id": 24,
        "name": "fab1/4/1",
        "controllingPort": 24,
        "pins": [
          {
            "a": {
              "chip": "BC61",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/4",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC61",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/4",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC61",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/4",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "25": {
      "mapping": {
        "id": 25,
        "name": "fab1/4/2",
        "controllingPort": 25,
        "pins": [
          {
            "a": {
              "chip": "BC2",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/4",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC2",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/4",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC2",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/4",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "26": {
      "mapping": {
        "id": 26,
        "name": "fab1/4/3",
        "controllingPort": 26,
        "pins": [
          {
            "a": {
              "chip": "BC61",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/4",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC61",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/4",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC61",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/4",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "27": {
      "mapping": {
        "id": 27,
        "name": "fab1/4/4",
        "controllingPort": 27,
        "pins": [
          {
            "a": {
              "chip": "BC2",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/4",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC2",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/4",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC2",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/4",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "28": {
      "mapping": {
        "id": 28,
        "name": "fab1/4/5",
        "controllingPort": 28,
        "pins": [
          {
            "a": {
              "chip": "BC60",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/4",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC60",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/4",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC60",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/4",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "29": {
      "mapping": {
        "id": 29,
        "name": "fab1/4/6",
        "controllingPort": 29,
        "pins": [
          {
            "a": {
              "chip": "BC3",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/4",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC3",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/4",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC3",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/4",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "30": {
      "mapping": {
        "id": 30,
        "name": "fab1/4/7",
        "controllingPort": 30,
        "pins": [
          {
            "a": {
              "chip": "BC60",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/4",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC60",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/4",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC60",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/4",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "31": {
      "mapping": {
        "id": 31,
        "name": "fab1/4/8",
        "controllingPort": 31,
        "pins": [
          {
            "a": {
              "chip": "BC3",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/4",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC3",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/4",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC3",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/4",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "32": {
      "mapping": {
        "id": 32,
        "name": "fab1/5/1",
        "controllingPort": 32,
        "pins": [
          {
            "a": {
              "chip": "BC62",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/5",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC62",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/5",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC62",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/5",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "33": {
      "mapping": {
        "id": 33,
        "name": "fab1/5/2",
        "controllingPort": 33,
        "pins": [
          {
            "a": {
              "chip": "BC1",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/5",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC1",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/5",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC1",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/5",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "34": {
      "mapping": {
        "id": 34,
        "name": "fab1/5/3",
        "controllingPort": 34,
        "pins": [
          {
            "a": {
              "chip": "BC62",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/5",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC62",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/5",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC62",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/5",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "35": {
      "mapping": {
        "id": 35,
        "name": "fab1/5/4",
        "controllingPort": 35,
        "pins": [
          {
            "a": {
              "chip": "BC1",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/5",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC1",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/5",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC1",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/5",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "36": {
      "mapping": {
        "id": 36,
        "name": "fab1/5/5",
        "controllingPort": 36,
        "pins": [
          {
            "a": {
              "chip": "BC63",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/5",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC63",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/5",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC63",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/5",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "37": {
      "mapping": {
        "id": 37,
        "name": "fab1/5/6",
        "controllingPort": 37,
        "pins": [
          {
            "a": {
              "chip": "BC0",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/5",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC0",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/5",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC0",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/5",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "38": {
      "mapping": {
        "id": 38,
        "name": "fab1/5/7",
        "controllingPort": 38,
        "pins": [
          {
            "a": {
              "chip": "BC63",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/5",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC63",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/5",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC63",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/5",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "39": {
      "mapping": {
        "id": 39,
        "name": "fab1/5/8",
        "controllingPort": 39,
        "pins": [
          {
            "a": {
              "chip": "BC0",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/5",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC0",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/5",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC0",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/5",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "40": {
      "mapping": {
        "id": 40,
        "name": "fab1/6/1",
        "controllingPort": 40,
        "pins": [
          {
            "a": {
              "chip": "BC60",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/6",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC60",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/6",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC60",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/6",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "41": {
      "mapping": {
        "id": 41,
        "name": "fab1/6/2",
        "controllingPort": 41,
        "pins": [
          {
            "a": {
              "chip": "BC3",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/6",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC3",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/6",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC3",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/6",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "42": {
      "mapping": {
        "id": 42,
        "name": "fab1/6/3",
        "controllingPort": 42,
        "pins": [
          {
            "a": {
              "chip": "BC60",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/6",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC60",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/6",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC60",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/6",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "43": {
      "mapping": {
        "id": 43,
        "name": "fab1/6/4",
        "controllingPort": 43,
        "pins": [
          {
            "a": {
              "chip": "BC3",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/6",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC3",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/6",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC3",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/6",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "44": {
      "mapping": {
        "id": 44,
        "name": "fab1/6/5",
        "controllingPort": 44,
        "pins": [
          {
            "a": {
              "chip": "BC61",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/6",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC61",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/6",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC61",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/6",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "45": {
      "mapping": {
        "id": 45,
        "name": "fab1/6/6",
        "controllingPort": 45,
        "pins": [
          {
            "a": {
              "chip": "BC2",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/6",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC2",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/6",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC2",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/6",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "46": {
      "mapping": {
        "id": 46,
        "name": "fab1/6/7",
        "controllingPort": 46,
        "pins": [
          {
            "a": {
              "chip": "BC61",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/6",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC61",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/6",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC61",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/6",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "47": {
      "mapping": {
        "id": 47,
        "name": "fab1/6/8",
        "controllingPort": 47,
        "pins": [
          {
            "a": {
              "chip": "BC2",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/6",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC2",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/6",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC2",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/6",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "48": {
      "mapping": {
        "id": 48,
        "name": "fab1/7/1",
        "controllingPort": 48,
        "pins": [
          {
            "a": {
              "chip": "BC62",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/7",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC62",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/7",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC62",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/7",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "49": {
      "mapping": {
        "id": 49,
        "name": "fab1/7/2",
        "controllingPort": 49,
        "pins": [
          {
            "a": {
              "chip": "BC1",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/7",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC1",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/7",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC1",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/7",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "50": {
      "mapping": {
        "id": 50,
        "name": "fab1/7/3",
        "controllingPort": 50,
        "pins": [
          {
            "a": {
              "chip": "BC62",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/7",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC62",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/7",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC62",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/7",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "51": {
      "mapping": {
        "id": 51,
        "name": "fab1/7/4",
        "controllingPort": 51,
        "pins": [
          {
            "a": {
              "chip": "BC1",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/7",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC1",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/7",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC1",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/7",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "52": {
      "mapping": {
        "id": 52,
        "name": "fab1/7/5",
        "controllingPort": 52,
        "pins": [
          {
            "a": {
              "chip": "BC63",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/7",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC63",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/7",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC63",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/7",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "53": {
      "mapping": {
        "id": 53,
        "name": "fab1/7/6",
        "controllingPort": 53,
        "pins": [
          {
            "a": {
              "chip": "BC0",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/7",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC0",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/7",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC0",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/7",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "54": {
      "mapping": {
        "id": 54,
        "name": "fab1/7/7",
        "controllingPort": 54,
        "pins": [
          {
            "a": {
              "chip": "BC63",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/7",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC63",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/7",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC63",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/7",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "55": {
      "mapping": {
        "id": 55,
        "name": "fab1/7/8",
        "controllingPort": 55,
        "pins": [
          {
            "a": {
              "chip": "BC0",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/7",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC0",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/7",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC0",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/7",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "56": {
      "mapping": {
        "id": 56,
        "name": "fab1/8/1",
        "controllingPort": 56,
        "pins": [
          {
            "a": {
              "chip": "BC60",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/8",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC60",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/8",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC60",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/8",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "57": {
      "mapping": {
        "id": 57,
        "name": "fab1/8/2",
        "controllingPort": 57,
        "pins": [
          {
            "a": {
              "chip": "BC3",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/8",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC3",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/8",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC3",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/8",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "58": {
      "mapping": {
        "id": 58,
        "name": "fab1/8/3",
        "controllingPort": 58,
        "pins": [
          {
            "a": {
              "chip": "BC60",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/8",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC60",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/8",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC60",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/8",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "59": {
      "mapping": {
        "id": 59,
        "name": "fab1/8/4",
        "controllingPort": 59,
        "pins": [
          {
            "a": {
              "chip": "BC3",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/8",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC3",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/8",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC3",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/8",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "60": {
      "mapping": {
        "id": 60,
        "name": "fab1/8/5",
        "controllingPort": 60,
        "pins": [
          {
            "a": {
              "chip": "BC61",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/8",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC61",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/8",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC61",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/8",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "61": {
      "mapping": {
        "id": 61,
        "name": "fab1/8/6",
        "controllingPort": 61,
        "pins": [
          {
            "a": {
              "chip": "BC2",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/8",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC2",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/8",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC2",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/8",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "62": {
      "mapping": {
        "id": 62,
        "name": "fab1/8/7",
        "controllingPort": 62,
        "pins": [
          {
            "a": {
              "chip": "BC61",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/8",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC61",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/8",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC61",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/8",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "63": {
      "mapping": {
        "id": 63,
        "name": "fab1/8/8",
        "controllingPort": 63,
        "pins": [
          {
            "a": {
              "chip": "BC2",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/8",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC2",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/8",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC2",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/8",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "64": {
      "mapping": {
        "id": 64,
        "name": "fab1/9/1",
        "controllingPort": 64,
        "pins": [
          {
            "a": {
              "chip": "BC59",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/9",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC59",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/9",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC59",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/9",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "65": {
      "mapping": {
        "id": 65,
        "name": "fab1/9/2",
        "controllingPort": 65,
        "pins": [
          {
            "a": {
              "chip": "BC4",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/9",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC4",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/9",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC4",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/9",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "66": {
      "mapping": {
        "id": 66,
        "name": "fab1/9/3",
        "controllingPort": 66,
        "pins": [
          {
            "a": {
              "chip": "BC59",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/9",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC59",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/9",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC59",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/9",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "67": {
      "mapping": {
        "id": 67,
        "name": "fab1/9/4",
        "controllingPort": 67,
        "pins": [
          {
            "a": {
              "chip": "BC4",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/9",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC4",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/9",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC4",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/9",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "68": {
      "mapping": {
        "id": 68,
        "name": "fab1/9/5",
        "controllingPort": 68,
        "pins": [
          {
            "a": {
              "chip": "BC58",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/9",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC58",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/9",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC58",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/9",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "69": {
      "mapping": {
        "id": 69,
        "name": "fab1/9/6",
        "controllingPort": 69,
        "pins": [
          {
            "a": {
              "chip": "BC5",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/9",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC5",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/9",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC5",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/9",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "70": {
      "mapping": {
        "id": 70,
        "name": "fab1/9/7",
        "controllingPort": 70,
        "pins": [
          {
            "a": {
              "chip": "BC58",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/9",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC58",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/9",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC58",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/9",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "71": {
      "mapping": {
        "id": 71,
        "name": "fab1/9/8",
        "controllingPort": 71,
        "pins": [
          {
            "a": {
              "chip": "BC5",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/9",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC5",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/9",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC5",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/9",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "72": {
      "mapping": {
        "id": 72,
        "name": "fab1/10/1",
        "controllingPort": 72,
        "pins": [
          {
            "a": {
              "chip": "BC57",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/10",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC57",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/10",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC57",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/10",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "73": {
      "mapping": {
        "id": 73,
        "name": "fab1/10/2",
        "controllingPort": 73,
        "pins": [
          {
            "a": {
              "chip": "BC6",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/10",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC6",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/10",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC6",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/10",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "74": {
      "mapping": {
        "id": 74,
        "name": "fab1/10/3",
        "controllingPort": 74,
        "pins": [
          {
            "a": {
              "chip": "BC57",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/10",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC57",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/10",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC57",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/10",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "75": {
      "mapping": {
        "id": 75,
        "name": "fab1/10/4",
        "controllingPort": 75,
        "pins": [
          {
            "a": {
              "chip": "BC6",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/10",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC6",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/10",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC6",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/10",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "76": {
      "mapping": {
        "id": 76,
        "name": "fab1/10/5",
        "controllingPort": 76,
        "pins": [
          {
            "a": {
              "chip": "BC56",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/10",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC56",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/10",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC56",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/10",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "77": {
      "mapping": {
        "id": 77,
        "name": "fab1/10/6",
        "controllingPort": 77,
        "pins": [
          {
            "a": {
              "chip": "BC7",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/10",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC7",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/10",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC7",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/10",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "78": {
      "mapping": {
        "id": 78,
        "name": "fab1/10/7",
        "controllingPort": 78,
        "pins": [
          {
            "a": {
              "chip": "BC56",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/10",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC56",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/10",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC56",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/10",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "79": {
      "mapping": {
        "id": 79,
        "name": "fab1/10/8",
        "controllingPort": 79,
        "pins": [
          {
            "a": {
              "chip": "BC7",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/10",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC7",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/10",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC7",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/10",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "80": {
      "mapping": {
        "id": 80,
        "name": "fab1/11/1",
        "controllingPort": 80,
        "pins": [
          {
            "a": {
              "chip": "BC59",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/11",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC59",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/11",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC59",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/11",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "81": {
      "mapping": {
        "id": 81,
        "name": "fab1/11/2",
        "controllingPort": 81,
        "pins": [
          {
            "a": {
              "chip": "BC4",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/11",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC4",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/11",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC4",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/11",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "82": {
      "mapping": {
        "id": 82,
        "name": "fab1/11/3",
        "controllingPort": 82,
        "pins": [
          {
            "a": {
              "chip": "BC59",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/11",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC59",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/11",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC59",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/11",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "83": {
      "mapping": {
        "id": 83,
        "name": "fab1/11/4",
        "controllingPort": 83,
        "pins": [
          {
            "a": {
              "chip": "BC4",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/11",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC4",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/11",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC4",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/11",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "84": {
      "mapping": {
        "id": 84,
        "name": "fab1/11/5",
        "controllingPort": 84,
        "pins": [
          {
            "a": {
              "chip": "BC58",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/11",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC58",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/11",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC58",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/11",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "85": {
      "mapping": {
        "id": 85,
        "name": "fab1/11/6",
        "controllingPort": 85,
        "pins": [
          {
            "a": {
              "chip": "BC5",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/11",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC5",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/11",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC5",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/11",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "86": {
      "mapping": {
        "id": 86,
        "name": "fab1/11/7",
        "controllingPort": 86,
        "pins": [
          {
            "a": {
              "chip": "BC58",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/11",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC58",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/11",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC58",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/11",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "87": {
      "mapping": {
        "id": 87,
        "name": "fab1/11/8",
        "controllingPort": 87,
        "pins": [
          {
            "a": {
              "chip": "BC5",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/11",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC5",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/11",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC5",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/11",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "88": {
      "mapping": {
        "id": 88,
        "name": "fab1/12/1",
        "controllingPort": 88,
        "pins": [
          {
            "a": {
              "chip": "BC57",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/12",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC57",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/12",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC57",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/12",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "89": {
      "mapping": {
        "id": 89,
        "name": "fab1/12/2",
        "controllingPort": 89,
        "pins": [
          {
            "a": {
              "chip": "BC6",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/12",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC6",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/12",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC6",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/12",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "90": {
      "mapping": {
        "id": 90,
        "name": "fab1/12/3",
        "controllingPort": 90,
        "pins": [
          {
            "a": {
              "chip": "BC57",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/12",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC57",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/12",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC57",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/12",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "91": {
      "mapping": {
        "id": 91,
        "name": "fab1/12/4",
        "controllingPort": 91,
        "pins": [
          {
            "a": {
              "chip": "BC6",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/12",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC6",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/12",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC6",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/12",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "92": {
      "mapping": {
        "id": 92,
        "name": "fab1/12/5",
        "controllingPort": 92,
        "pins": [
          {
            "a": {
              "chip": "BC56",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/12",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC56",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/12",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC56",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/12",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "93": {
      "mapping": {
        "id": 93,
        "name": "fab1/12/6",
        "controllingPort": 93,
        "pins": [
          {
            "a": {
              "chip": "BC7",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/12",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC7",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/12",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC7",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/12",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "94": {
      "mapping": {
        "id": 94,
        "name": "fab1/12/7",
        "controllingPort": 94,
        "pins": [
          {
            "a": {
              "chip": "BC56",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/12",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC56",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/12",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC56",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/12",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "95": {
      "mapping": {
        "id": 95,
        "name": "fab1/12/8",
        "controllingPort": 95,
        "pins": [
          {
            "a": {
              "chip": "BC7",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/12",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC7",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/12",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC7",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/12",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "96": {
      "mapping": {
        "id": 96,
        "name": "fab1/13/1",
        "controllingPort": 96,
        "pins": [
          {
            "a": {
              "chip": "BC59",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/13",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC59",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/13",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC59",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/13",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "97": {
      "mapping": {
        "id": 97,
        "name": "fab1/13/2",
        "controllingPort": 97,
        "pins": [
          {
            "a": {
              "chip": "BC4",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/13",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC4",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/13",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC4",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/13",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "98": {
      "mapping": {
        "id": 98,
        "name": "fab1/13/3",
        "controllingPort": 98,
        "pins": [
          {
            "a": {
              "chip": "BC59",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/13",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC59",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/13",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC59",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/13",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "99": {
      "mapping": {
        "id": 99,
        "name": "fab1/13/4",
        "controllingPort": 99,
        "pins": [
          {
            "a": {
              "chip": "BC4",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/13",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC4",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/13",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC4",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/13",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "100": {
      "mapping": {
        "id": 100,
        "name": "fab1/13/5",
        "controllingPort": 100,
        "pins": [
          {
            "a": {
              "chip": "BC58",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/13",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC58",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/13",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC58",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/13",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "101": {
      "mapping": {
        "id": 101,
        "name": "fab1/13/6",
        "controllingPort": 101,
        "pins": [
          {
            "a": {
              "chip": "BC5",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/13",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC5",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/13",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC5",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/13",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "102": {
      "mapping": {
        "id": 102,
        "name": "fab1/13/7",
        "controllingPort": 102,
        "pins": [
          {
            "a": {
              "chip": "BC58",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/13",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC58",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/13",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC58",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/13",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "103": {
      "mapping": {
        "id": 103,
        "name": "fab1/13/8",
        "controllingPort": 103,
        "pins": [
          {
            "a": {
              "chip": "BC5",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/13",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC5",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/13",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC5",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/13",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "104": {
      "mapping": {
        "id": 104,
        "name": "fab1/14/1",
        "controllingPort": 104,
        "pins": [
          {
            "a": {
              "chip": "BC57",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/14",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC57",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/14",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC57",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/14",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "105": {
      "mapping": {
        "id": 105,
        "name": "fab1/14/2",
        "controllingPort": 105,
        "pins": [
          {
            "a": {
              "chip": "BC6",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/14",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC6",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/14",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC6",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/14",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "106": {
      "mapping": {
        "id": 106,
        "name": "fab1/14/3",
        "controllingPort": 106,
        "pins": [
          {
            "a": {
              "chip": "BC57",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/14",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC57",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/14",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC57",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/14",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "107": {
      "mapping": {
        "id": 107,
        "name": "fab1/14/4",
        "controllingPort": 107,
        "pins": [
          {
            "a": {
              "chip": "BC6",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/14",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC6",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/14",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC6",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/14",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "108": {
      "mapping": {
        "id": 108,
        "name": "fab1/14/5",
        "controllingPort": 108,
        "pins": [
          {
            "a": {
              "chip": "BC56",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/14",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC56",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/14",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC56",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/14",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "109": {
      "mapping": {
        "id": 109,
        "name": "fab1/14/6",
        "controllingPort": 109,
        "pins": [
          {
            "a": {
              "chip": "BC7",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/14",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC7",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/14",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC7",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/14",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "110": {
      "mapping": {
        "id": 110,
        "name": "fab1/14/7",
        "controllingPort": 110,
        "pins": [
          {
            "a": {
              "chip": "BC56",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/14",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC56",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/14",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC56",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/14",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "111": {
      "mapping": {
        "id": 111,
        "name": "fab1/14/8",
        "controllingPort": 111,
        "pins": [
          {
            "a": {
              "chip": "BC7",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/14",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC7",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/14",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC7",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/14",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "112": {
      "mapping": {
        "id": 112,
        "name": "fab1/15/1",
        "controllingPort": 112,
        "pins": [
          {
            "a": {
              "chip": "BC59",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/15",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC59",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/15",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC59",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/15",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "113": {
      "mapping": {
        "id": 113,
        "name": "fab1/15/2",
        "controllingPort": 113,
        "pins": [
          {
            "a": {
              "chip": "BC4",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/15",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC4",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/15",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC4",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/15",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "114": {
      "mapping": {
        "id": 114,
        "name": "fab1/15/3",
        "controllingPort": 114,
        "pins": [
          {
            "a": {
              "chip": "BC59",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/15",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC59",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/15",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC59",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/15",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "115": {
      "mapping": {
        "id": 115,
        "name": "fab1/15/4",
        "controllingPort": 115,
        "pins": [
          {
            "a": {
              "chip": "BC4",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/15",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC4",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/15",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC4",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/15",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "116": {
      "mapping": {
        "id": 116,
        "name": "fab1/15/5",
        "controllingPort": 116,
        "pins": [
          {
            "a": {
              "chip": "BC58",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/15",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC58",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/15",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC58",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/15",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "117": {
      "mapping": {
        "id": 117,
        "name": "fab1/15/6",
        "controllingPort": 117,
        "pins": [
          {
            "a": {
              "chip": "BC5",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/15",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC5",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/15",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC5",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/15",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "118": {
      "mapping": {
        "id": 118,
        "name": "fab1/15/7",
        "controllingPort": 118,
        "pins": [
          {
            "a": {
              "chip": "BC58",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/15",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC58",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/15",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC58",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/15",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "119": {
      "mapping": {
        "id": 119,
        "name": "fab1/15/8",
        "controllingPort": 119,
        "pins": [
          {
            "a": {
              "chip": "BC5",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/15",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC5",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/15",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC5",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/15",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "120": {
      "mapping": {
        "id": 120,
        "name": "fab1/16/1",
        "controllingPort": 120,
        "pins": [
          {
            "a": {
              "chip": "BC57",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/16",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC57",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/16",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC57",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/16",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "121": {
      "mapping": {
        "id": 121,
        "name": "fab1/16/2",
        "controllingPort": 121,
        "pins": [
          {
            "a": {
              "chip": "BC6",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/16",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC6",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/16",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC6",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/16",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "122": {
      "mapping": {
        "id": 122,
        "name": "fab1/16/3",
        "controllingPort": 122,
        "pins": [
          {
            "a": {
              "chip": "BC57",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/16",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC57",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/16",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC57",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/16",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "123": {
      "mapping": {
        "id": 123,
        "name": "fab1/16/4",
        "controllingPort": 123,
        "pins": [
          {
            "a": {
              "chip": "BC6",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/16",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC6",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/16",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC6",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/16",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "124": {
      "mapping": {
        "id": 124,
        "name": "fab1/16/5",
        "controllingPort": 124,
        "pins": [
          {
            "a": {
              "chip": "BC56",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/16",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC56",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/16",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC56",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/16",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "125": {
      "mapping": {
        "id": 125,
        "name": "fab1/16/6",
        "controllingPort": 125,
        "pins": [
          {
            "a": {
              "chip": "BC7",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/16",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC7",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/16",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC7",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/16",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "126": {
      "mapping": {
        "id": 126,
        "name": "fab1/16/7",
        "controllingPort": 126,
        "pins": [
          {
            "a": {
              "chip": "BC56",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/16",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC56",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/16",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC56",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/16",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "127": {
      "mapping": {
        "id": 127,
        "name": "fab1/16/8",
        "controllingPort": 127,
        "pins": [
          {
            "a": {
              "chip": "BC7",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/16",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC7",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/16",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC7",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/16",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "128": {
      "mapping": {
        "id": 128,
        "name": "fab1/17/1",
        "controllingPort": 128,
        "pins": [
          {
            "a": {
              "chip": "BC55",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/17",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC55",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/17",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC55",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/17",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "129": {
      "mapping": {
        "id": 129,
        "name": "fab1/17/2",
        "controllingPort": 129,
        "pins": [
          {
            "a": {
              "chip": "BC8",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/17",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC8",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/17",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC8",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/17",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "130": {
      "mapping": {
        "id": 130,
        "name": "fab1/17/3",
        "controllingPort": 130,
        "pins": [
          {
            "a": {
              "chip": "BC55",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/17",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC55",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/17",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC55",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/17",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "131": {
      "mapping": {
        "id": 131,
        "name": "fab1/17/4",
        "controllingPort": 131,
        "pins": [
          {
            "a": {
              "chip": "BC8",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/17",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC8",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/17",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC8",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/17",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "132": {
      "mapping": {
        "id": 132,
        "name": "fab1/17/5",
        "controllingPort": 132,
        "pins": [
          {
            "a": {
              "chip": "BC54",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/17",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC54",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/17",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC54",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/17",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "133": {
      "mapping": {
        "id": 133,
        "name": "fab1/17/6",
        "controllingPort": 133,
        "pins": [
          {
            "a": {
              "chip": "BC9",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/17",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC9",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/17",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC9",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/17",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "134": {
      "mapping": {
        "id": 134,
        "name": "fab1/17/7",
        "controllingPort": 134,
        "pins": [
          {
            "a": {
              "chip": "BC54",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/17",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC54",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/17",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC54",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/17",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "135": {
      "mapping": {
        "id": 135,
        "name": "fab1/17/8",
        "controllingPort": 135,
        "pins": [
          {
            "a": {
              "chip": "BC9",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/17",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC9",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/17",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC9",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/17",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "136": {
      "mapping": {
        "id": 136,
        "name": "fab1/18/1",
        "controllingPort": 136,
        "pins": [
          {
            "a": {
              "chip": "BC53",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/18",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC53",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/18",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC53",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/18",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "137": {
      "mapping": {
        "id": 137,
        "name": "fab1/18/2",
        "controllingPort": 137,
        "pins": [
          {
            "a": {
              "chip": "BC10",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/18",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC10",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/18",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC10",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/18",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "138": {
      "mapping": {
        "id": 138,
        "name": "fab1/18/3",
        "controllingPort": 138,
        "pins": [
          {
            "a": {
              "chip": "BC53",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/18",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC53",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/18",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC53",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/18",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "139": {
      "mapping": {
        "id": 139,
        "name": "fab1/18/4",
        "controllingPort": 139,
        "pins": [
          {
            "a": {
              "chip": "BC10",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/18",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC10",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/18",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC10",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/18",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "140": {
      "mapping": {
        "id": 140,
        "name": "fab1/18/5",
        "controllingPort": 140,
        "pins": [
          {
            "a": {
              "chip": "BC52",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/18",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC52",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/18",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC52",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/18",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "141": {
      "mapping": {
        "id": 141,
        "name": "fab1/18/6",
        "controllingPort": 141,
        "pins": [
          {
            "a": {
              "chip": "BC11",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/18",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC11",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/18",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC11",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/18",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "142": {
      "mapping": {
        "id": 142,
        "name": "fab1/18/7",
        "controllingPort": 142,
        "pins": [
          {
            "a": {
              "chip": "BC52",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/18",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC52",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/18",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC52",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/18",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "143": {
      "mapping": {
        "id": 143,
        "name": "fab1/18/8",
        "controllingPort": 143,
        "pins": [
          {
            "a": {
              "chip": "BC11",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/18",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC11",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/18",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC11",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/18",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "144": {
      "mapping": {
        "id": 144,
        "name": "fab1/19/1",
        "controllingPort": 144,
        "pins": [
          {
            "a": {
              "chip": "BC55",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/19",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC55",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/19",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC55",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/19",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "145": {
      "mapping": {
        "id": 145,
        "name": "fab1/19/2",
        "controllingPort": 145,
        "pins": [
          {
            "a": {
              "chip": "BC8",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/19",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC8",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/19",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC8",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/19",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "146": {
      "mapping": {
        "id": 146,
        "name": "fab1/19/3",
        "controllingPort": 146,
        "pins": [
          {
            "a": {
              "chip": "BC55",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/19",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC55",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/19",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC55",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/19",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "147": {
      "mapping": {
        "id": 147,
        "name": "fab1/19/4",
        "controllingPort": 147,
        "pins": [
          {
            "a": {
              "chip": "BC8",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/19",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC8",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/19",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC8",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/19",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "148": {
      "mapping": {
        "id": 148,
        "name": "fab1/19/5",
        "controllingPort": 148,
        "pins": [
          {
            "a": {
              "chip": "BC54",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/19",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC54",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/19",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC54",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/19",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "149": {
      "mapping": {
        "id": 149,
        "name": "fab1/19/6",
        "controllingPort": 149,
        "pins": [
          {
            "a": {
              "chip": "BC9",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/19",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC9",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/19",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC9",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/19",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "150": {
      "mapping": {
        "id": 150,
        "name": "fab1/19/7",
        "controllingPort": 150,
        "pins": [
          {
            "a": {
              "chip": "BC54",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/19",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC54",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/19",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC54",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/19",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "151": {
      "mapping": {
        "id": 151,
        "name": "fab1/19/8",
        "controllingPort": 151,
        "pins": [
          {
            "a": {
              "chip": "BC9",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/19",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC9",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/19",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC9",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/19",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "152": {
      "mapping": {
        "id": 152,
        "name": "fab1/20/1",
        "controllingPort": 152,
        "pins": [
          {
            "a": {
              "chip": "BC53",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/20",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC53",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/20",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC53",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/20",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "153": {
      "mapping": {
        "id": 153,
        "name": "fab1/20/2",
        "controllingPort": 153,
        "pins": [
          {
            "a": {
              "chip": "BC10",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/20",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC10",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/20",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC10",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/20",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "154": {
      "mapping": {
        "id": 154,
        "name": "fab1/20/3",
        "controllingPort": 154,
        "pins": [
          {
            "a": {
              "chip": "BC53",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/20",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC53",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/20",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC53",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/20",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "155": {
      "mapping": {
        "id": 155,
        "name": "fab1/20/4",
        "controllingPort": 155,
        "pins": [
          {
            "a": {
              "chip": "BC10",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/20",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC10",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/20",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC10",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/20",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "156": {
      "mapping": {
        "id": 156,
        "name": "fab1/20/5",
        "controllingPort": 156,
        "pins": [
          {
            "a": {
              "chip": "BC52",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/20",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC52",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/20",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC52",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/20",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "157": {
      "mapping": {
        "id": 157,
        "name": "fab1/20/6",
        "controllingPort": 157,
        "pins": [
          {
            "a": {
              "chip": "BC11",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/20",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC11",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/20",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC11",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/20",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "158": {
      "mapping": {
        "id": 158,
        "name": "fab1/20/7",
        "controllingPort": 158,
        "pins": [
          {
            "a": {
              "chip": "BC52",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/20",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC52",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/20",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC52",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/20",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "159": {
      "mapping": {
        "id": 159,
        "name": "fab1/20/8",
        "controllingPort": 159,
        "pins": [
          {
            "a": {
              "chip": "BC11",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/20",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC11",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/20",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC11",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/20",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "160": {
      "mapping": {
        "id": 160,
        "name": "fab1/21/1",
        "controllingPort": 160,
        "pins": [
          {
            "a": {
              "chip": "BC55",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/21",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC55",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/21",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC55",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/21",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "161": {
      "mapping": {
        "id": 161,
        "name": "fab1/21/2",
        "controllingPort": 161,
        "pins": [
          {
            "a": {
              "chip": "BC8",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/21",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC8",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/21",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC8",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/21",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "162": {
      "mapping": {
        "id": 162,
        "name": "fab1/21/3",
        "controllingPort": 162,
        "pins": [
          {
            "a": {
              "chip": "BC55",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/21",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC55",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/21",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC55",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/21",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "163": {
      "mapping": {
        "id": 163,
        "name": "fab1/21/4",
        "controllingPort": 163,
        "pins": [
          {
            "a": {
              "chip": "BC8",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/21",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC8",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/21",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC8",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/21",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "164": {
      "mapping": {
        "id": 164,
        "name": "fab1/21/5",
        "controllingPort": 164,
        "pins": [
          {
            "a": {
              "chip": "BC54",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/21",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC54",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/21",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC54",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/21",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "165": {
      "mapping": {
        "id": 165,
        "name": "fab1/21/6",
        "controllingPort": 165,
        "pins": [
          {
            "a": {
              "chip": "BC9",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/21",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC9",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/21",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC9",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/21",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "166": {
      "mapping": {
        "id": 166,
        "name": "fab1/21/7",
        "controllingPort": 166,
        "pins": [
          {
            "a": {
              "chip": "BC54",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/21",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC54",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/21",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC54",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/21",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "167": {
      "mapping": {
        "id": 167,
        "name": "fab1/21/8",
        "controllingPort": 167,
        "pins": [
          {
            "a": {
              "chip": "BC9",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/21",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC9",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/21",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC9",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/21",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "168": {
      "mapping": {
        "id": 168,
        "name": "fab1/22/1",
        "controllingPort": 168,
        "pins": [
          {
            "a": {
              "chip": "BC53",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/22",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC53",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/22",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC53",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/22",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "169": {
      "mapping": {
        "id": 169,
        "name": "fab1/22/2",
        "controllingPort": 169,
        "pins": [
          {
            "a": {
              "chip": "BC10",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/22",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC10",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/22",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC10",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/22",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "170": {
      "mapping": {
        "id": 170,
        "name": "fab1/22/3",
        "controllingPort": 170,
        "pins": [
          {
            "a": {
              "chip": "BC53",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/22",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC53",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/22",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC53",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/22",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "171": {
      "mapping": {
        "id": 171,
        "name": "fab1/22/4",
        "controllingPort": 171,
        "pins": [
          {
            "a": {
              "chip": "BC10",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/22",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC10",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/22",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC10",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/22",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "172": {
      "mapping": {
        "id": 172,
        "name": "fab1/22/5",
        "controllingPort": 172,
        "pins": [
          {
            "a": {
              "chip": "BC52",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/22",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC52",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/22",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC52",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/22",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "173": {
      "mapping": {
        "id": 173,
        "name": "fab1/22/6",
        "controllingPort": 173,
        "pins": [
          {
            "a": {
              "chip": "BC11",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/22",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC11",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/22",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC11",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/22",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "174": {
      "mapping": {
        "id": 174,
        "name": "fab1/22/7",
        "controllingPort": 174,
        "pins": [
          {
            "a": {
              "chip": "BC52",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/22",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC52",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/22",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC52",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/22",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "175": {
      "mapping": {
        "id": 175,
        "name": "fab1/22/8",
        "controllingPort": 175,
        "pins": [
          {
            "a": {
              "chip": "BC11",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/22",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC11",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/22",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC11",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/22",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "176": {
      "mapping": {
        "id": 176,
        "name": "fab1/23/1",
        "controllingPort": 176,
        "pins": [
          {
            "a": {
              "chip": "BC55",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/23",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC55",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/23",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC55",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/23",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "177": {
      "mapping": {
        "id": 177,
        "name": "fab1/23/2",
        "controllingPort": 177,
        "pins": [
          {
            "a": {
              "chip": "BC8",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/23",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC8",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/23",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC8",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/23",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "178": {
      "mapping": {
        "id": 178,
        "name": "fab1/23/3",
        "controllingPort": 178,
        "pins": [
          {
            "a": {
              "chip": "BC55",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/23",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC55",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/23",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC55",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/23",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "179": {
      "mapping": {
        "id": 179,
        "name": "fab1/23/4",
        "controllingPort": 179,
        "pins": [
          {
            "a": {
              "chip": "BC8",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/23",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC8",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/23",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC8",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/23",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "180": {
      "mapping": {
        "id": 180,
        "name": "fab1/23/5",
        "controllingPort": 180,
        "pins": [
          {
            "a": {
              "chip": "BC54",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/23",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC54",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/23",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC54",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/23",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "181": {
      "mapping": {
        "id": 181,
        "name": "fab1/23/6",
        "controllingPort": 181,
        "pins": [
          {
            "a": {
              "chip": "BC9",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/23",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC9",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/23",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC9",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/23",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "182": {
      "mapping": {
        "id": 182,
        "name": "fab1/23/7",
        "controllingPort": 182,
        "pins": [
          {
            "a": {
              "chip": "BC54",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/23",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC54",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/23",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC54",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/23",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "183": {
      "mapping": {
        "id": 183,
        "name": "fab1/23/8",
        "controllingPort": 183,
        "pins": [
          {
            "a": {
              "chip": "BC9",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/23",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC9",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/23",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC9",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/23",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "184": {
      "mapping": {
        "id": 184,
        "name": "fab1/24/1",
        "controllingPort": 184,
        "pins": [
          {
            "a": {
              "chip": "BC53",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/24",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC53",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/24",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC53",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/24",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "185": {
      "mapping": {
        "id": 185,
        "name": "fab1/24/2",
        "controllingPort": 185,
        "pins": [
          {
            "a": {
              "chip": "BC10",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/24",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC10",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/24",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC10",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/24",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "186": {
      "mapping": {
        "id": 186,
        "name": "fab1/24/3",
        "controllingPort": 186,
        "pins": [
          {
            "a": {
              "chip": "BC53",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/24",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC53",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/24",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC53",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/24",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "187": {
      "mapping": {
        "id": 187,
        "name": "fab1/24/4",
        "controllingPort": 187,
        "pins": [
          {
            "a": {
              "chip": "BC10",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/24",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC10",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/24",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC10",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/24",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "188": {
      "mapping": {
        "id": 188,
        "name": "fab1/24/5",
        "controllingPort": 188,
        "pins": [
          {
            "a": {
              "chip": "BC52",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/24",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC52",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/24",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC52",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/24",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "189": {
      "mapping": {
        "id": 189,
        "name": "fab1/24/6",
        "controllingPort": 189,
        "pins": [
          {
            "a": {
              "chip": "BC11",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/24",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC11",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/24",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC11",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/24",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "190": {
      "mapping": {
        "id": 190,
        "name": "fab1/24/7",
        "controllingPort": 190,
        "pins": [
          {
            "a": {
              "chip": "BC52",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/24",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC52",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/24",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC52",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/24",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "191": {
      "mapping": {
        "id": 191,
        "name": "fab1/24/8",
        "controllingPort": 191,
        "pins": [
          {
            "a": {
              "chip": "BC11",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/24",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC11",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/24",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC11",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/24",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "192": {
      "mapping": {
        "id": 192,
        "name": "fab1/25/1",
        "controllingPort": 192,
        "pins": [
          {
            "a": {
              "chip": "BC51",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/25",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC51",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/25",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC51",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/25",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "193": {
      "mapping": {
        "id": 193,
        "name": "fab1/25/2",
        "controllingPort": 193,
        "pins": [
          {
            "a": {
              "chip": "BC12",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/25",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC12",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/25",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC12",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/25",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "194": {
      "mapping": {
        "id": 194,
        "name": "fab1/25/3",
        "controllingPort": 194,
        "pins": [
          {
            "a": {
              "chip": "BC51",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/25",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC51",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/25",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC51",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/25",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "195": {
      "mapping": {
        "id": 195,
        "name": "fab1/25/4",
        "controllingPort": 195,
        "pins": [
          {
            "a": {
              "chip": "BC12",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/25",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC12",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/25",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC12",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/25",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "196": {
      "mapping": {
        "id": 196,
        "name": "fab1/25/5",
        "controllingPort": 196,
        "pins": [
          {
            "a": {
              "chip": "BC50",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/25",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC50",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/25",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC50",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/25",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "197": {
      "mapping": {
        "id": 197,
        "name": "fab1/25/6",
        "controllingPort": 197,
        "pins": [
          {
            "a": {
              "chip": "BC13",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/25",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC13",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/25",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC13",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/25",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "198": {
      "mapping": {
        "id": 198,
        "name": "fab1/25/7",
        "controllingPort": 198,
        "pins": [
          {
            "a": {
              "chip": "BC50",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/25",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC50",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/25",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC50",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/25",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "199": {
      "mapping": {
        "id": 199,
        "name": "fab1/25/8",
        "controllingPort": 199,
        "pins": [
          {
            "a": {
              "chip": "BC13",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/25",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC13",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/25",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC13",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/25",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "200": {
      "mapping": {
        "id": 200,
        "name": "fab1/26/1",
        "controllingPort": 200,
        "pins": [
          {
            "a": {
              "chip": "BC49",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/26",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC49",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/26",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC49",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/26",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "201": {
      "mapping": {
        "id": 201,
        "name": "fab1/26/2",
        "controllingPort": 201,
        "pins": [
          {
            "a": {
              "chip": "BC14",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/26",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC14",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/26",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC14",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/26",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "202": {
      "mapping": {
        "id": 202,
        "name": "fab1/26/3",
        "controllingPort": 202,
        "pins": [
          {
            "a": {
              "chip": "BC49",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/26",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC49",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/26",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC49",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/26",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "203": {
      "mapping": {
        "id": 203,
        "name": "fab1/26/4",
        "controllingPort": 203,
        "pins": [
          {
            "a": {
              "chip": "BC14",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/26",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC14",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/26",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC14",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/26",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "204": {
      "mapping": {
        "id": 204,
        "name": "fab1/26/5",
        "controllingPort": 204,
        "pins": [
          {
            "a": {
              "chip": "BC48",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/26",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC48",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/26",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC48",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/26",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "205": {
      "mapping": {
        "id": 205,
        "name": "fab1/26/6",
        "controllingPort": 205,
        "pins": [
          {
            "a": {
              "chip": "BC15",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/26",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC15",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/26",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC15",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/26",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "206": {
      "mapping": {
        "id": 206,
        "name": "fab1/26/7",
        "controllingPort": 206,
        "pins": [
          {
            "a": {
              "chip": "BC48",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/26",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC48",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/26",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC48",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/26",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "207": {
      "mapping": {
        "id": 207,
        "name": "fab1/26/8",
        "controllingPort": 207,
        "pins": [
          {
            "a": {
              "chip": "BC15",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/26",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC15",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/26",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC15",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/26",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "208": {
      "mapping": {
        "id": 208,
        "name": "fab1/27/1",
        "controllingPort": 208,
        "pins": [
          {
            "a": {
              "chip": "BC51",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/27",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC51",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/27",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC51",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/27",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "209": {
      "mapping": {
        "id": 209,
        "name": "fab1/27/2",
        "controllingPort": 209,
        "pins": [
          {
            "a": {
              "chip": "BC12",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/27",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC12",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/27",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC12",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/27",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "210": {
      "mapping": {
        "id": 210,
        "name": "fab1/27/3",
        "controllingPort": 210,
        "pins": [
          {
            "a": {
              "chip": "BC51",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/27",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC51",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/27",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC51",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/27",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "211": {
      "mapping": {
        "id": 211,
        "name": "fab1/27/4",
        "controllingPort": 211,
        "pins": [
          {
            "a": {
              "chip": "BC12",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/27",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC12",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/27",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC12",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/27",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "212": {
      "mapping": {
        "id": 212,
        "name": "fab1/27/5",
        "controllingPort": 212,
        "pins": [
          {
            "a": {
              "chip": "BC50",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/27",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC50",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/27",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC50",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/27",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "213": {
      "mapping": {
        "id": 213,
        "name": "fab1/27/6",
        "controllingPort": 213,
        "pins": [
          {
            "a": {
              "chip": "BC13",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/27",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC13",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/27",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC13",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/27",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "214": {
      "mapping": {
        "id": 214,
        "name": "fab1/27/7",
        "controllingPort": 214,
        "pins": [
          {
            "a": {
              "chip": "BC50",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/27",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC50",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/27",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC50",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/27",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "215": {
      "mapping": {
        "id": 215,
        "name": "fab1/27/8",
        "controllingPort": 215,
        "pins": [
          {
            "a": {
              "chip": "BC13",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/27",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC13",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/27",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC13",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/27",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "216": {
      "mapping": {
        "id": 216,
        "name": "fab1/28/1",
        "controllingPort": 216,
        "pins": [
          {
            "a": {
              "chip": "BC49",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/28",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC49",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/28",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC49",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/28",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "217": {
      "mapping": {
        "id": 217,
        "name": "fab1/28/2",
        "controllingPort": 217,
        "pins": [
          {
            "a": {
              "chip": "BC14",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/28",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC14",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/28",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC14",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/28",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "218": {
      "mapping": {
        "id": 218,
        "name": "fab1/28/3",
        "controllingPort": 218,
        "pins": [
          {
            "a": {
              "chip": "BC49",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/28",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC49",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/28",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC49",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/28",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "219": {
      "mapping": {
        "id": 219,
        "name": "fab1/28/4",
        "controllingPort": 219,
        "pins": [
          {
            "a": {
              "chip": "BC14",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/28",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC14",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/28",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC14",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/28",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "220": {
      "mapping": {
        "id": 220,
        "name": "fab1/28/5",
        "controllingPort": 220,
        "pins": [
          {
            "a": {
              "chip": "BC48",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/28",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC48",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/28",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC48",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/28",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "221": {
      "mapping": {
        "id": 221,
        "name": "fab1/28/6",
        "controllingPort": 221,
        "pins": [
          {
            "a": {
              "chip": "BC15",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/28",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC15",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/28",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC15",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/28",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "222": {
      "mapping": {
        "id": 222,
        "name": "fab1/28/7",
        "controllingPort": 222,
        "pins": [
          {
            "a": {
              "chip": "BC48",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/28",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC48",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/28",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC48",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/28",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "223": {
      "mapping": {
        "id": 223,
        "name": "fab1/28/8",
        "controllingPort": 223,
        "pins": [
          {
            "a": {
              "chip": "BC15",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/28",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC15",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/28",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC15",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/28",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "224": {
      "mapping": {
        "id": 224,
        "name": "fab1/29/1",
        "controllingPort": 224,
        "pins": [
          {
            "a": {
              "chip": "BC51",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/29",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC51",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/29",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC51",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/29",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "225": {
      "mapping": {
        "id": 225,
        "name": "fab1/29/2",
        "controllingPort": 225,
        "pins": [
          {
            "a": {
              "chip": "BC12",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/29",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC12",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/29",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC12",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/29",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "226": {
      "mapping": {
        "id": 226,
        "name": "fab1/29/3",
        "controllingPort": 226,
        "pins": [
          {
            "a": {
              "chip": "BC51",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/29",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC51",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/29",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC51",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/29",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "227": {
      "mapping": {
        "id": 227,
        "name": "fab1/29/4",
        "controllingPort": 227,
        "pins": [
          {
            "a": {
              "chip": "BC12",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/29",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC12",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/29",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC12",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/29",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "228": {
      "mapping": {
        "id": 228,
        "name": "fab1/29/5",
        "controllingPort": 228,
        "pins": [
          {
            "a": {
              "chip": "BC50",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/29",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC50",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/29",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC50",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/29",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "229": {
      "mapping": {
        "id": 229,
        "name": "fab1/29/6",
        "controllingPort": 229,
        "pins": [
          {
            "a": {
              "chip": "BC13",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/29",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC13",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/29",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC13",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/29",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "230": {
      "mapping": {
        "id": 230,
        "name": "fab1/29/7",
        "controllingPort": 230,
        "pins": [
          {
            "a": {
              "chip": "BC50",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/29",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC50",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/29",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC50",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/29",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "231": {
      "mapping": {
        "id": 231,
        "name": "fab1/29/8",
        "controllingPort": 231,
        "pins": [
          {
            "a": {
              "chip": "BC13",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/29",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC13",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/29",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC13",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/29",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "232": {
      "mapping": {
        "id": 232,
        "name": "fab1/30/1",
        "controllingPort": 232,
        "pins": [
          {
            "a": {
              "chip": "BC49",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/30",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC49",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/30",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC49",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/30",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "233": {
      "mapping": {
        "id": 233,
        "name": "fab1/30/2",
        "controllingPort": 233,
        "pins": [
          {
            "a": {
              "chip": "BC14",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/30",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC14",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/30",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC14",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/30",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "234": {
      "mapping": {
        "id": 234,
        "name": "fab1/30/3",
        "controllingPort": 234,
        "pins": [
          {
            "a": {
              "chip": "BC49",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/30",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC49",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/30",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC49",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/30",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "235": {
      "mapping": {
        "id": 235,
        "name": "fab1/30/4",
        "controllingPort": 235,
        "pins": [
          {
            "a": {
              "chip": "BC14",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/30",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC14",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/30",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC14",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/30",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "236": {
      "mapping": {
        "id": 236,
        "name": "fab1/30/5",
        "controllingPort": 236,
        "pins": [
          {
            "a": {
              "chip": "BC48",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/30",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC48",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/30",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC48",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/30",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "237": {
      "mapping": {
        "id": 237,
        "name": "fab1/30/6",
        "controllingPort": 237,
        "pins": [
          {
            "a": {
              "chip": "BC15",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/30",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC15",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/30",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC15",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/30",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "238": {
      "mapping": {
        "id": 238,
        "name": "fab1/30/7",
        "controllingPort": 238,
        "pins": [
          {
            "a": {
              "chip": "BC48",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/30",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC48",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/30",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC48",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/30",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "239": {
      "mapping": {
        "id": 239,
        "name": "fab1/30/8",
        "controllingPort": 239,
        "pins": [
          {
            "a": {
              "chip": "BC15",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/30",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC15",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/30",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC15",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/30",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "240": {
      "mapping": {
        "id": 240,
        "name": "fab1/31/1",
        "controllingPort": 240,
        "pins": [
          {
            "a": {
              "chip": "BC51",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/31",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC51",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/31",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC51",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/31",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "241": {
      "mapping": {
        "id": 241,
        "name": "fab1/31/2",
        "controllingPort": 241,
        "pins": [
          {
            "a": {
              "chip": "BC12",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/31",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC12",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/31",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC12",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/31",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "242": {
      "mapping": {
        "id": 242,
        "name": "fab1/31/3",
        "controllingPort": 242,
        "pins": [
          {
            "a": {
              "chip": "BC51",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/31",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC51",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/31",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC51",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/31",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "243": {
      "mapping": {
        "id": 243,
        "name": "fab1/31/4",
        "controllingPort": 243,
        "pins": [
          {
            "a": {
              "chip": "BC12",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/31",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC12",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/31",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC12",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/31",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "244": {
      "mapping": {
        "id": 244,
        "name": "fab1/31/5",
        "controllingPort": 244,
        "pins": [
          {
            "a": {
              "chip": "BC50",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/31",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC50",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/31",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC50",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/31",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "245": {
      "mapping": {
        "id": 245,
        "name": "fab1/31/6",
        "controllingPort": 245,
        "pins": [
          {
            "a": {
              "chip": "BC13",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/31",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC13",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/31",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC13",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/31",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "246": {
      "mapping": {
        "id": 246,
        "name": "fab1/31/7",
        "controllingPort": 246,
        "pins": [
          {
            "a": {
              "chip": "BC50",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/31",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC50",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/31",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC50",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/31",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "247": {
      "mapping": {
        "id": 247,
        "name": "fab1/31/8",
        "controllingPort": 247,
        "pins": [
          {
            "a": {
              "chip": "BC13",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/31",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC13",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/31",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC13",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/31",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "248": {
      "mapping": {
        "id": 248,
        "name": "fab1/32/1",
        "controllingPort": 248,
        "pins": [
          {
            "a": {
              "chip": "BC49",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/32",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC49",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/32",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC49",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/32",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "249": {
      "mapping": {
        "id": 249,
        "name": "fab1/32/2",
        "controllingPort": 249,
        "pins": [
          {
            "a": {
              "chip": "BC14",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/32",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC14",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/32",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC14",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/32",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "250": {
      "mapping": {
        "id": 250,
        "name": "fab1/32/3",
        "controllingPort": 250,
        "pins": [
          {
            "a": {
              "chip": "BC49",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/32",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC49",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/32",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC49",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/32",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "251": {
      "mapping": {
        "id": 251,
        "name": "fab1/32/4",
        "controllingPort": 251,
        "pins": [
          {
            "a": {
              "chip": "BC14",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/32",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC14",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/32",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC14",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/32",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "252": {
      "mapping": {
        "id": 252,
        "name": "fab1/32/5",
        "controllingPort": 252,
        "pins": [
          {
            "a": {
              "chip": "BC48",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/32",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC48",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/32",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC48",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/32",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "253": {
      "mapping": {
        "id": 253,
        "name": "fab1/32/6",
        "controllingPort": 253,
        "pins": [
          {
            "a": {
              "chip": "BC15",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/32",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC15",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/32",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC15",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/32",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "254": {
      "mapping": {
        "id": 254,
        "name": "fab1/32/7",
        "controllingPort": 254,
        "pins": [
          {
            "a": {
              "chip": "BC48",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/32",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC48",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/32",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC48",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/32",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "255": {
      "mapping": {
        "id": 255,
        "name": "fab1/32/8",
        "controllingPort": 255,
        "pins": [
          {
            "a": {
              "chip": "BC15",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/32",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC15",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/32",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC15",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/32",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "256": {
      "mapping": {
        "id": 256,
        "name": "fab1/33/1",
        "controllingPort": 256,
        "pins": [
          {
            "a": {
              "chip": "BC47",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/33",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/33",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/33",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "257": {
      "mapping": {
        "id": 257,
        "name": "fab1/33/2",
        "controllingPort": 257,
        "pins": [
          {
            "a": {
              "chip": "BC16",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/33",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/33",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/33",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "258": {
      "mapping": {
        "id": 258,
        "name": "fab1/33/3",
        "controllingPort": 258,
        "pins": [
          {
            "a": {
              "chip": "BC47",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/33",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/33",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/33",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "259": {
      "mapping": {
        "id": 259,
        "name": "fab1/33/4",
        "controllingPort": 259,
        "pins": [
          {
            "a": {
              "chip": "BC16",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/33",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/33",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/33",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "260": {
      "mapping": {
        "id": 260,
        "name": "fab1/33/5",
        "controllingPort": 260,
        "pins": [
          {
            "a": {
              "chip": "BC46",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/33",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/33",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/33",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "261": {
      "mapping": {
        "id": 261,
        "name": "fab1/33/6",
        "controllingPort": 261,
        "pins": [
          {
            "a": {
              "chip": "BC17",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/33",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/33",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/33",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "262": {
      "mapping": {
        "id": 262,
        "name": "fab1/33/7",
        "controllingPort": 262,
        "pins": [
          {
            "a": {
              "chip": "BC46",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/33",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/33",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/33",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "263": {
      "mapping": {
        "id": 263,
        "name": "fab1/33/8",
        "controllingPort": 263,
        "pins": [
          {
            "a": {
              "chip": "BC17",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/33",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/33",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/33",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "264": {
      "mapping": {
        "id": 264,
        "name": "fab1/34/1",
        "controllingPort": 264,
        "pins": [
          {
            "a": {
              "chip": "BC45",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/34",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/34",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/34",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "265": {
      "mapping": {
        "id": 265,
        "name": "fab1/34/2",
        "controllingPort": 265,
        "pins": [
          {
            "a": {
              "chip": "BC18",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/34",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/34",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/34",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "266": {
      "mapping": {
        "id": 266,
        "name": "fab1/34/3",
        "controllingPort": 266,
        "pins": [
          {
            "a": {
              "chip": "BC45",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/34",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/34",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/34",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "267": {
      "mapping": {
        "id": 267,
        "name": "fab1/34/4",
        "controllingPort": 267,
        "pins": [
          {
            "a": {
              "chip": "BC18",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/34",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/34",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/34",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "268": {
      "mapping": {
        "id": 268,
        "name": "fab1/34/5",
        "controllingPort": 268,
        "pins": [
          {
            "a": {
              "chip": "BC44",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/34",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/34",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/34",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "269": {
      "mapping": {
        "id": 269,
        "name": "fab1/34/6",
        "controllingPort": 269,
        "pins": [
          {
            "a": {
              "chip": "BC19",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/34",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/34",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/34",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "270": {
      "mapping": {
        "id": 270,
        "name": "fab1/34/7",
        "controllingPort": 270,
        "pins": [
          {
            "a": {
              "chip": "BC44",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/34",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/34",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/34",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "271": {
      "mapping": {
        "id": 271,
        "name": "fab1/34/8",
        "controllingPort": 271,
        "pins": [
          {
            "a": {
              "chip": "BC19",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/34",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/34",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/34",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "272": {
      "mapping": {
        "id": 272,
        "name": "fab1/35/1",
        "controllingPort": 272,
        "pins": [
          {
            "a": {
              "chip": "BC47",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/35",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/35",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/35",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "273": {
      "mapping": {
        "id": 273,
        "name": "fab1/35/2",
        "controllingPort": 273,
        "pins": [
          {
            "a": {
              "chip": "BC16",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/35",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/35",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/35",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "274": {
      "mapping": {
        "id": 274,
        "name": "fab1/35/3",
        "controllingPort": 274,
        "pins": [
          {
            "a": {
              "chip": "BC47",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/35",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/35",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/35",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "275": {
      "mapping": {
        "id": 275,
        "name": "fab1/35/4",
        "controllingPort": 275,
        "pins": [
          {
            "a": {
              "chip": "BC16",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/35",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/35",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/35",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "276": {
      "mapping": {
        "id": 276,
        "name": "fab1/35/5",
        "controllingPort": 276,
        "pins": [
          {
            "a": {
              "chip": "BC46",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/35",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/35",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/35",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "277": {
      "mapping": {
        "id": 277,
        "name": "fab1/35/6",
        "controllingPort": 277,
        "pins": [
          {
            "a": {
              "chip": "BC17",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/35",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/35",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/35",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "278": {
      "mapping": {
        "id": 278,
        "name": "fab1/35/7",
        "controllingPort": 278,
        "pins": [
          {
            "a": {
              "chip": "BC46",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/35",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/35",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/35",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "279": {
      "mapping": {
        "id": 279,
        "name": "fab1/35/8",
        "controllingPort": 279,
        "pins": [
          {
            "a": {
              "chip": "BC17",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/35",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/35",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/35",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "280": {
      "mapping": {
        "id": 280,
        "name": "fab1/36/1",
        "controllingPort": 280,
        "pins": [
          {
            "a": {
              "chip": "BC45",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/36",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/36",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/36",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "281": {
      "mapping": {
        "id": 281,
        "name": "fab1/36/2",
        "controllingPort": 281,
        "pins": [
          {
            "a": {
              "chip": "BC18",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/36",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/36",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/36",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "282": {
      "mapping": {
        "id": 282,
        "name": "fab1/36/3",
        "controllingPort": 282,
        "pins": [
          {
            "a": {
              "chip": "BC45",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/36",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/36",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/36",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "283": {
      "mapping": {
        "id": 283,
        "name": "fab1/36/4",
        "controllingPort": 283,
        "pins": [
          {
            "a": {
              "chip": "BC18",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/36",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/36",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/36",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "284": {
      "mapping": {
        "id": 284,
        "name": "fab1/36/5",
        "controllingPort": 284,
        "pins": [
          {
            "a": {
              "chip": "BC44",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/36",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/36",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/36",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "285": {
      "mapping": {
        "id": 285,
        "name": "fab1/36/6",
        "controllingPort": 285,
        "pins": [
          {
            "a": {
              "chip": "BC19",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/36",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/36",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/36",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "286": {
      "mapping": {
        "id": 286,
        "name": "fab1/36/7",
        "controllingPort": 286,
        "pins": [
          {
            "a": {
              "chip": "BC44",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/36",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/36",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/36",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "287": {
      "mapping": {
        "id": 287,
        "name": "fab1/36/8",
        "controllingPort": 287,
        "pins": [
          {
            "a": {
              "chip": "BC19",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/36",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/36",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/36",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "288": {
      "mapping": {
        "id": 288,
        "name": "fab1/37/1",
        "controllingPort": 288,
        "pins": [
          {
            "a": {
              "chip": "BC47",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/37",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/37",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/37",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "289": {
      "mapping": {
        "id": 289,
        "name": "fab1/37/2",
        "controllingPort": 289,
        "pins": [
          {
            "a": {
              "chip": "BC16",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/37",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/37",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/37",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "290": {
      "mapping": {
        "id": 290,
        "name": "fab1/37/3",
        "controllingPort": 290,
        "pins": [
          {
            "a": {
              "chip": "BC47",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/37",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/37",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/37",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "291": {
      "mapping": {
        "id": 291,
        "name": "fab1/37/4",
        "controllingPort": 291,
        "pins": [
          {
            "a": {
              "chip": "BC16",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/37",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/37",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/37",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "292": {
      "mapping": {
        "id": 292,
        "name": "fab1/37/5",
        "controllingPort": 292,
        "pins": [
          {
            "a": {
              "chip": "BC46",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/37",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/37",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/37",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "293": {
      "mapping": {
        "id": 293,
        "name": "fab1/37/6",
        "controllingPort": 293,
        "pins": [
          {
            "a": {
              "chip": "BC17",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/37",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/37",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/37",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "294": {
      "mapping": {
        "id": 294,
        "name": "fab1/37/7",
        "controllingPort": 294,
        "pins": [
          {
            "a": {
              "chip": "BC46",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/37",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/37",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/37",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "295": {
      "mapping": {
        "id": 295,
        "name": "fab1/37/8",
        "controllingPort": 295,
        "pins": [
          {
            "a": {
              "chip": "BC17",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/37",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/37",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/37",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "296": {
      "mapping": {
        "id": 296,
        "name": "fab1/38/1",
        "controllingPort": 296,
        "pins": [
          {
            "a": {
              "chip": "BC45",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/38",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/38",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/38",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "297": {
      "mapping": {
        "id": 297,
        "name": "fab1/38/2",
        "controllingPort": 297,
        "pins": [
          {
            "a": {
              "chip": "BC18",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/38",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/38",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/38",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "298": {
      "mapping": {
        "id": 298,
        "name": "fab1/38/3",
        "controllingPort": 298,
        "pins": [
          {
            "a": {
              "chip": "BC45",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/38",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/38",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/38",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "299": {
      "mapping": {
        "id": 299,
        "name": "fab1/38/4",
        "controllingPort": 299,
        "pins": [
          {
            "a": {
              "chip": "BC18",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/38",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/38",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/38",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "300": {
      "mapping": {
        "id": 300,
        "name": "fab1/38/5",
        "controllingPort": 300,
        "pins": [
          {
            "a": {
              "chip": "BC44",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/38",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/38",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/38",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "301": {
      "mapping": {
        "id": 301,
        "name": "fab1/38/6",
        "controllingPort": 301,
        "pins": [
          {
            "a": {
              "chip": "BC19",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/38",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/38",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/38",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "302": {
      "mapping": {
        "id": 302,
        "name": "fab1/38/7",
        "controllingPort": 302,
        "pins": [
          {
            "a": {
              "chip": "BC44",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/38",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/38",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/38",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "303": {
      "mapping": {
        "id": 303,
        "name": "fab1/38/8",
        "controllingPort": 303,
        "pins": [
          {
            "a": {
              "chip": "BC19",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/38",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/38",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/38",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "304": {
      "mapping": {
        "id": 304,
        "name": "fab1/39/1",
        "controllingPort": 304,
        "pins": [
          {
            "a": {
              "chip": "BC47",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/39",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/39",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/39",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "305": {
      "mapping": {
        "id": 305,
        "name": "fab1/39/2",
        "controllingPort": 305,
        "pins": [
          {
            "a": {
              "chip": "BC16",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/39",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/39",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/39",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "306": {
      "mapping": {
        "id": 306,
        "name": "fab1/39/3",
        "controllingPort": 306,
        "pins": [
          {
            "a": {
              "chip": "BC47",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/39",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/39",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/39",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "307": {
      "mapping": {
        "id": 307,
        "name": "fab1/39/4",
        "controllingPort": 307,
        "pins": [
          {
            "a": {
              "chip": "BC16",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/39",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/39",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/39",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "308": {
      "mapping": {
        "id": 308,
        "name": "fab1/39/5",
        "controllingPort": 308,
        "pins": [
          {
            "a": {
              "chip": "BC46",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/39",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/39",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/39",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "309": {
      "mapping": {
        "id": 309,
        "name": "fab1/39/6",
        "controllingPort": 309,
        "pins": [
          {
            "a": {
              "chip": "BC17",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/39",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/39",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/39",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "310": {
      "mapping": {
        "id": 310,
        "name": "fab1/39/7",
        "controllingPort": 310,
        "pins": [
          {
            "a": {
              "chip": "BC46",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/39",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/39",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/39",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "311": {
      "mapping": {
        "id": 311,
        "name": "fab1/39/8",
        "controllingPort": 311,
        "pins": [
          {
            "a": {
              "chip": "BC17",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/39",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/39",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/39",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "312": {
      "mapping": {
        "id": 312,
        "name": "fab1/40/1",
        "controllingPort": 312,
        "pins": [
          {
            "a": {
              "chip": "BC45",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/40",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/40",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/40",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "313": {
      "mapping": {
        "id": 313,
        "name": "fab1/40/2",
        "controllingPort": 313,
        "pins": [
          {
            "a": {
              "chip": "BC18",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/40",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/40",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/40",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "314": {
      "mapping": {
        "id": 314,
        "name": "fab1/40/3",
        "controllingPort": 314,
        "pins": [
          {
            "a": {
              "chip": "BC45",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/40",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/40",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/40",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "315": {
      "mapping": {
        "id": 315,
        "name": "fab1/40/4",
        "controllingPort": 315,
        "pins": [
          {
            "a": {
              "chip": "BC18",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/40",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/40",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/40",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "316": {
      "mapping": {
        "id": 316,
        "name": "fab1/40/5",
        "controllingPort": 316,
        "pins": [
          {
            "a": {
              "chip": "BC44",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/40",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/40",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/40",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "317": {
      "mapping": {
        "id": 317,
        "name": "fab1/40/6",
        "controllingPort": 317,
        "pins": [
          {
            "a": {
              "chip": "BC19",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/40",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/40",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/40",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "318": {
      "mapping": {
        "id": 318,
        "name": "fab1/40/7",
        "controllingPort": 318,
        "pins": [
          {
            "a": {
              "chip": "BC44",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/40",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/40",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/40",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "319": {
      "mapping": {
        "id": 319,
        "name": "fab1/40/8",
        "controllingPort": 319,
        "pins": [
          {
            "a": {
              "chip": "BC19",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/40",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/40",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/40",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "320": {
      "mapping": {
        "id": 320,
        "name": "fab1/41/1",
        "controllingPort": 320,
        "pins": [
          {
            "a": {
              "chip": "BC43",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/41",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/41",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/41",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "321": {
      "mapping": {
        "id": 321,
        "name": "fab1/41/2",
        "controllingPort": 321,
        "pins": [
          {
            "a": {
              "chip": "BC20",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/41",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/41",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/41",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "322": {
      "mapping": {
        "id": 322,
        "name": "fab1/41/3",
        "controllingPort": 322,
        "pins": [
          {
            "a": {
              "chip": "BC43",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/41",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/41",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/41",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "323": {
      "mapping": {
        "id": 323,
        "name": "fab1/41/4",
        "controllingPort": 323,
        "pins": [
          {
            "a": {
              "chip": "BC20",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/41",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/41",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/41",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "324": {
      "mapping": {
        "id": 324,
        "name": "fab1/41/5",
        "controllingPort": 324,
        "pins": [
          {
            "a": {
              "chip": "BC42",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/41",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/41",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/41",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "325": {
      "mapping": {
        "id": 325,
        "name": "fab1/41/6",
        "controllingPort": 325,
        "pins": [
          {
            "a": {
              "chip": "BC21",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/41",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/41",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/41",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "326": {
      "mapping": {
        "id": 326,
        "name": "fab1/41/7",
        "controllingPort": 326,
        "pins": [
          {
            "a": {
              "chip": "BC42",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/41",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/41",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/41",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "327": {
      "mapping": {
        "id": 327,
        "name": "fab1/41/8",
        "controllingPort": 327,
        "pins": [
          {
            "a": {
              "chip": "BC21",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/41",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/41",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/41",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "328": {
      "mapping": {
        "id": 328,
        "name": "fab1/42/1",
        "controllingPort": 328,
        "pins": [
          {
            "a": {
              "chip": "BC41",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/42",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/42",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/42",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "329": {
      "mapping": {
        "id": 329,
        "name": "fab1/42/2",
        "controllingPort": 329,
        "pins": [
          {
            "a": {
              "chip": "BC22",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/42",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/42",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/42",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "330": {
      "mapping": {
        "id": 330,
        "name": "fab1/42/3",
        "controllingPort": 330,
        "pins": [
          {
            "a": {
              "chip": "BC41",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/42",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/42",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/42",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "331": {
      "mapping": {
        "id": 331,
        "name": "fab1/42/4",
        "controllingPort": 331,
        "pins": [
          {
            "a": {
              "chip": "BC22",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/42",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/42",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/42",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "332": {
      "mapping": {
        "id": 332,
        "name": "fab1/42/5",
        "controllingPort": 332,
        "pins": [
          {
            "a": {
              "chip": "BC40",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/42",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/42",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/42",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "333": {
      "mapping": {
        "id": 333,
        "name": "fab1/42/6",
        "controllingPort": 333,
        "pins": [
          {
            "a": {
              "chip": "BC23",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/42",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/42",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/42",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "334": {
      "mapping": {
        "id": 334,
        "name": "fab1/42/7",
        "controllingPort": 334,
        "pins": [
          {
            "a": {
              "chip": "BC40",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/42",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/42",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/42",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "335": {
      "mapping": {
        "id": 335,
        "name": "fab1/42/8",
        "controllingPort": 335,
        "pins": [
          {
            "a": {
              "chip": "BC23",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/42",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/42",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/42",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "336": {
      "mapping": {
        "id": 336,
        "name": "fab1/43/1",
        "controllingPort": 336,
        "pins": [
          {
            "a": {
              "chip": "BC43",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/43",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/43",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/43",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "337": {
      "mapping": {
        "id": 337,
        "name": "fab1/43/2",
        "controllingPort": 337,
        "pins": [
          {
            "a": {
              "chip": "BC20",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/43",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/43",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/43",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "338": {
      "mapping": {
        "id": 338,
        "name": "fab1/43/3",
        "controllingPort": 338,
        "pins": [
          {
            "a": {
              "chip": "BC43",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/43",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/43",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/43",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "339": {
      "mapping": {
        "id": 339,
        "name": "fab1/43/4",
        "controllingPort": 339,
        "pins": [
          {
            "a": {
              "chip": "BC20",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/43",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/43",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/43",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "340": {
      "mapping": {
        "id": 340,
        "name": "fab1/43/5",
        "controllingPort": 340,
        "pins": [
          {
            "a": {
              "chip": "BC42",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/43",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/43",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/43",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "341": {
      "mapping": {
        "id": 341,
        "name": "fab1/43/6",
        "controllingPort": 341,
        "pins": [
          {
            "a": {
              "chip": "BC21",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/43",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/43",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/43",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "342": {
      "mapping": {
        "id": 342,
        "name": "fab1/43/7",
        "controllingPort": 342,
        "pins": [
          {
            "a": {
              "chip": "BC42",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/43",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/43",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/43",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "343": {
      "mapping": {
        "id": 343,
        "name": "fab1/43/8",
        "controllingPort": 343,
        "pins": [
          {
            "a": {
              "chip": "BC21",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/43",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/43",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/43",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "344": {
      "mapping": {
        "id": 344,
        "name": "fab1/44/1",
        "controllingPort": 344,
        "pins": [
          {
            "a": {
              "chip": "BC41",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/44",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/44",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/44",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "345": {
      "mapping": {
        "id": 345,
        "name": "fab1/44/2",
        "controllingPort": 345,
        "pins": [
          {
            "a": {
              "chip": "BC22",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/44",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/44",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/44",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "346": {
      "mapping": {
        "id": 346,
        "name": "fab1/44/3",
        "controllingPort": 346,
        "pins": [
          {
            "a": {
              "chip": "BC41",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/44",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/44",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/44",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "347": {
      "mapping": {
        "id": 347,
        "name": "fab1/44/4",
        "controllingPort": 347,
        "pins": [
          {
            "a": {
              "chip": "BC22",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/44",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/44",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/44",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "348": {
      "mapping": {
        "id": 348,
        "name": "fab1/44/5",
        "controllingPort": 348,
        "pins": [
          {
            "a": {
              "chip": "BC40",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/44",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/44",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/44",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "349": {
      "mapping": {
        "id": 349,
        "name": "fab1/44/6",
        "controllingPort": 349,
        "pins": [
          {
            "a": {
              "chip": "BC23",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/44",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/44",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/44",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "350": {
      "mapping": {
        "id": 350,
        "name": "fab1/44/7",
        "controllingPort": 350,
        "pins": [
          {
            "a": {
              "chip": "BC40",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/44",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/44",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/44",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "351": {
      "mapping": {
        "id": 351,
        "name": "fab1/44/8",
        "controllingPort": 351,
        "pins": [
          {
            "a": {
              "chip": "BC23",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/44",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/44",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/44",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "352": {
      "mapping": {
        "id": 352,
        "name": "fab1/45/1",
        "controllingPort": 352,
        "pins": [
          {
            "a": {
              "chip": "BC43",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/45",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/45",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/45",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "353": {
      "mapping": {
        "id": 353,
        "name": "fab1/45/2",
        "controllingPort": 353,
        "pins": [
          {
            "a": {
              "chip": "BC20",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/45",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/45",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/45",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "354": {
      "mapping": {
        "id": 354,
        "name": "fab1/45/3",
        "controllingPort": 354,
        "pins": [
          {
            "a": {
              "chip": "BC43",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/45",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/45",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/45",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "355": {
      "mapping": {
        "id": 355,
        "name": "fab1/45/4",
        "controllingPort": 355,
        "pins": [
          {
            "a": {
              "chip": "BC20",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/45",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/45",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/45",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "356": {
      "mapping": {
        "id": 356,
        "name": "fab1/45/5",
        "controllingPort": 356,
        "pins": [
          {
            "a": {
              "chip": "BC42",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/45",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/45",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/45",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "357": {
      "mapping": {
        "id": 357,
        "name": "fab1/45/6",
        "controllingPort": 357,
        "pins": [
          {
            "a": {
              "chip": "BC21",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/45",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/45",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/45",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "358": {
      "mapping": {
        "id": 358,
        "name": "fab1/45/7",
        "controllingPort": 358,
        "pins": [
          {
            "a": {
              "chip": "BC42",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/45",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/45",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/45",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "359": {
      "mapping": {
        "id": 359,
        "name": "fab1/45/8",
        "controllingPort": 359,
        "pins": [
          {
            "a": {
              "chip": "BC21",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/45",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/45",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/45",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "360": {
      "mapping": {
        "id": 360,
        "name": "fab1/46/1",
        "controllingPort": 360,
        "pins": [
          {
            "a": {
              "chip": "BC41",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/46",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/46",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/46",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "361": {
      "mapping": {
        "id": 361,
        "name": "fab1/46/2",
        "controllingPort": 361,
        "pins": [
          {
            "a": {
              "chip": "BC22",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/46",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/46",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/46",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "362": {
      "mapping": {
        "id": 362,
        "name": "fab1/46/3",
        "controllingPort": 362,
        "pins": [
          {
            "a": {
              "chip": "BC41",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/46",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/46",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/46",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "363": {
      "mapping": {
        "id": 363,
        "name": "fab1/46/4",
        "controllingPort": 363,
        "pins": [
          {
            "a": {
              "chip": "BC22",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/46",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/46",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/46",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "364": {
      "mapping": {
        "id": 364,
        "name": "fab1/46/5",
        "controllingPort": 364,
        "pins": [
          {
            "a": {
              "chip": "BC40",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/46",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/46",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/46",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "365": {
      "mapping": {
        "id": 365,
        "name": "fab1/46/6",
        "controllingPort": 365,
        "pins": [
          {
            "a": {
              "chip": "BC23",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/46",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/46",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/46",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "366": {
      "mapping": {
        "id": 366,
        "name": "fab1/46/7",
        "controllingPort": 366,
        "pins": [
          {
            "a": {
              "chip": "BC40",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/46",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/46",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/46",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "367": {
      "mapping": {
        "id": 367,
        "name": "fab1/46/8",
        "controllingPort": 367,
        "pins": [
          {
            "a": {
              "chip": "BC23",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/46",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/46",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/46",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "368": {
      "mapping": {
        "id": 368,
        "name": "fab1/47/1",
        "controllingPort": 368,
        "pins": [
          {
            "a": {
              "chip": "BC43",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/47",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/47",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/47",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "369": {
      "mapping": {
        "id": 369,
        "name": "fab1/47/2",
        "controllingPort": 369,
        "pins": [
          {
            "a": {
              "chip": "BC20",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/47",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/47",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/47",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "370": {
      "mapping": {
        "id": 370,
        "name": "fab1/47/3",
        "controllingPort": 370,
        "pins": [
          {
            "a": {
              "chip": "BC43",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/47",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/47",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/47",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "371": {
      "mapping": {
        "id": 371,
        "name": "fab1/47/4",
        "controllingPort": 371,
        "pins": [
          {
            "a": {
              "chip": "BC20",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/47",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/47",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/47",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "372": {
      "mapping": {
        "id": 372,
        "name": "fab1/47/5",
        "controllingPort": 372,
        "pins": [
          {
            "a": {
              "chip": "BC42",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/47",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/47",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/47",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "373": {
      "mapping": {
        "id": 373,
        "name": "fab1/47/6",
        "controllingPort": 373,
        "pins": [
          {
            "a": {
              "chip": "BC21",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/47",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/47",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/47",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "374": {
      "mapping": {
        "id": 374,
        "name": "fab1/47/7",
        "controllingPort": 374,
        "pins": [
          {
            "a": {
              "chip": "BC42",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/47",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/47",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/47",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "375": {
      "mapping": {
        "id": 375,
        "name": "fab1/47/8",
        "controllingPort": 375,
        "pins": [
          {
            "a": {
              "chip": "BC21",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/47",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/47",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/47",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "376": {
      "mapping": {
        "id": 376,
        "name": "fab1/48/1",
        "controllingPort": 376,
        "pins": [
          {
            "a": {
              "chip": "BC41",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/48",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/48",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/48",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "377": {
      "mapping": {
        "id": 377,
        "name": "fab1/48/2",
        "controllingPort": 377,
        "pins": [
          {
            "a": {
              "chip": "BC22",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/48",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/48",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/48",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "378": {
      "mapping": {
        "id": 378,
        "name": "fab1/48/3",
        "controllingPort": 378,
        "pins": [
          {
            "a": {
              "chip": "BC41",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/48",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/48",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/48",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "379": {
      "mapping": {
        "id": 379,
        "name": "fab1/48/4",
        "controllingPort": 379,
        "pins": [
          {
            "a": {
              "chip": "BC22",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/48",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/48",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/48",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "380": {
      "mapping": {
        "id": 380,
        "name": "fab1/48/5",
        "controllingPort": 380,
        "pins": [
          {
            "a": {
              "chip": "BC40",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/48",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/48",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/48",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "381": {
      "mapping": {
        "id": 381,
        "name": "fab1/48/6",
        "controllingPort": 381,
        "pins": [
          {
            "a": {
              "chip": "BC23",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/48",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/48",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/48",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "382": {
      "mapping": {
        "id": 382,
        "name": "fab1/48/7",
        "controllingPort": 382,
        "pins": [
          {
            "a": {
              "chip": "BC40",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/48",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/48",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/48",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "383": {
      "mapping": {
        "id": 383,
        "name": "fab1/48/8",
        "controllingPort": 383,
        "pins": [
          {
            "a": {
              "chip": "BC23",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/48",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/48",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/48",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "384": {
      "mapping": {
        "id": 384,
        "name": "fab1/49/1",
        "controllingPort": 384,
        "pins": [
          {
            "a": {
              "chip": "BC39",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/49",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/49",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/49",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "385": {
      "mapping": {
        "id": 385,
        "name": "fab1/49/2",
        "controllingPort": 385,
        "pins": [
          {
            "a": {
              "chip": "BC24",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/49",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/49",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/49",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "386": {
      "mapping": {
        "id": 386,
        "name": "fab1/49/3",
        "controllingPort": 386,
        "pins": [
          {
            "a": {
              "chip": "BC39",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/49",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/49",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/49",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "387": {
      "mapping": {
        "id": 387,
        "name": "fab1/49/4",
        "controllingPort": 387,
        "pins": [
          {
            "a": {
              "chip": "BC24",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/49",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/49",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/49",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "388": {
      "mapping": {
        "id": 388,
        "name": "fab1/49/5",
        "controllingPort": 388,
        "pins": [
          {
            "a": {
              "chip": "BC38",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/49",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/49",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/49",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "389": {
      "mapping": {
        "id": 389,
        "name": "fab1/49/6",
        "controllingPort": 389,
        "pins": [
          {
            "a": {
              "chip": "BC25",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/49",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/49",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/49",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "390": {
      "mapping": {
        "id": 390,
        "name": "fab1/49/7",
        "controllingPort": 390,
        "pins": [
          {
            "a": {
              "chip": "BC38",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/49",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/49",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/49",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "391": {
      "mapping": {
        "id": 391,
        "name": "fab1/49/8",
        "controllingPort": 391,
        "pins": [
          {
            "a": {
              "chip": "BC25",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/49",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/49",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/49",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "392": {
      "mapping": {
        "id": 392,
        "name": "fab1/50/1",
        "controllingPort": 392,
        "pins": [
          {
            "a": {
              "chip": "BC37",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/50",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/50",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/50",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "393": {
      "mapping": {
        "id": 393,
        "name": "fab1/50/2",
        "controllingPort": 393,
        "pins": [
          {
            "a": {
              "chip": "BC26",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/50",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/50",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/50",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "394": {
      "mapping": {
        "id": 394,
        "name": "fab1/50/3",
        "controllingPort": 394,
        "pins": [
          {
            "a": {
              "chip": "BC37",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/50",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/50",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/50",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "395": {
      "mapping": {
        "id": 395,
        "name": "fab1/50/4",
        "controllingPort": 395,
        "pins": [
          {
            "a": {
              "chip": "BC26",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/50",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/50",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/50",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "396": {
      "mapping": {
        "id": 396,
        "name": "fab1/50/5",
        "controllingPort": 396,
        "pins": [
          {
            "a": {
              "chip": "BC36",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/50",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/50",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/50",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "397": {
      "mapping": {
        "id": 397,
        "name": "fab1/50/6",
        "controllingPort": 397,
        "pins": [
          {
            "a": {
              "chip": "BC27",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/50",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/50",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/50",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "398": {
      "mapping": {
        "id": 398,
        "name": "fab1/50/7",
        "controllingPort": 398,
        "pins": [
          {
            "a": {
              "chip": "BC36",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/50",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/50",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/50",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "399": {
      "mapping": {
        "id": 399,
        "name": "fab1/50/8",
        "controllingPort": 399,
        "pins": [
          {
            "a": {
              "chip": "BC27",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/50",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/50",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/50",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "400": {
      "mapping": {
        "id": 400,
        "name": "fab1/51/1",
        "controllingPort": 400,
        "pins": [
          {
            "a": {
              "chip": "BC39",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/51",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/51",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/51",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "401": {
      "mapping": {
        "id": 401,
        "name": "fab1/51/2",
        "controllingPort": 401,
        "pins": [
          {
            "a": {
              "chip": "BC24",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/51",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/51",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/51",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "402": {
      "mapping": {
        "id": 402,
        "name": "fab1/51/3",
        "controllingPort": 402,
        "pins": [
          {
            "a": {
              "chip": "BC39",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/51",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/51",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/51",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "403": {
      "mapping": {
        "id": 403,
        "name": "fab1/51/4",
        "controllingPort": 403,
        "pins": [
          {
            "a": {
              "chip": "BC24",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/51",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/51",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/51",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "404": {
      "mapping": {
        "id": 404,
        "name": "fab1/51/5",
        "controllingPort": 404,
        "pins": [
          {
            "a": {
              "chip": "BC38",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/51",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/51",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/51",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "405": {
      "mapping": {
        "id": 405,
        "name": "fab1/51/6",
        "controllingPort": 405,
        "pins": [
          {
            "a": {
              "chip": "BC25",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/51",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/51",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/51",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "406": {
      "mapping": {
        "id": 406,
        "name": "fab1/51/7",
        "controllingPort": 406,
        "pins": [
          {
            "a": {
              "chip": "BC38",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/51",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/51",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/51",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "407": {
      "mapping": {
        "id": 407,
        "name": "fab1/51/8",
        "controllingPort": 407,
        "pins": [
          {
            "a": {
              "chip": "BC25",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/51",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/51",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/51",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "408": {
      "mapping": {
        "id": 408,
        "name": "fab1/52/1",
        "controllingPort": 408,
        "pins": [
          {
            "a": {
              "chip": "BC37",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/52",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/52",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/52",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "409": {
      "mapping": {
        "id": 409,
        "name": "fab1/52/2",
        "controllingPort": 409,
        "pins": [
          {
            "a": {
              "chip": "BC26",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/52",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/52",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/52",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "410": {
      "mapping": {
        "id": 410,
        "name": "fab1/52/3",
        "controllingPort": 410,
        "pins": [
          {
            "a": {
              "chip": "BC37",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/52",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/52",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/52",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "411": {
      "mapping": {
        "id": 411,
        "name": "fab1/52/4",
        "controllingPort": 411,
        "pins": [
          {
            "a": {
              "chip": "BC26",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/52",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/52",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/52",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "412": {
      "mapping": {
        "id": 412,
        "name": "fab1/52/5",
        "controllingPort": 412,
        "pins": [
          {
            "a": {
              "chip": "BC36",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/52",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/52",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/52",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "413": {
      "mapping": {
        "id": 413,
        "name": "fab1/52/6",
        "controllingPort": 413,
        "pins": [
          {
            "a": {
              "chip": "BC27",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/52",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/52",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/52",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "414": {
      "mapping": {
        "id": 414,
        "name": "fab1/52/7",
        "controllingPort": 414,
        "pins": [
          {
            "a": {
              "chip": "BC36",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/52",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/52",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/52",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "415": {
      "mapping": {
        "id": 415,
        "name": "fab1/52/8",
        "controllingPort": 415,
        "pins": [
          {
            "a": {
              "chip": "BC27",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/52",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/52",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/52",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "416": {
      "mapping": {
        "id": 416,
        "name": "fab1/53/1",
        "controllingPort": 416,
        "pins": [
          {
            "a": {
              "chip": "BC39",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/53",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/53",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/53",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "417": {
      "mapping": {
        "id": 417,
        "name": "fab1/53/2",
        "controllingPort": 417,
        "pins": [
          {
            "a": {
              "chip": "BC24",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/53",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/53",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/53",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "418": {
      "mapping": {
        "id": 418,
        "name": "fab1/53/3",
        "controllingPort": 418,
        "pins": [
          {
            "a": {
              "chip": "BC39",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/53",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/53",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/53",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "419": {
      "mapping": {
        "id": 419,
        "name": "fab1/53/4",
        "controllingPort": 419,
        "pins": [
          {
            "a": {
              "chip": "BC24",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/53",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/53",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/53",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "420": {
      "mapping": {
        "id": 420,
        "name": "fab1/53/5",
        "controllingPort": 420,
        "pins": [
          {
            "a": {
              "chip": "BC38",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/53",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/53",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/53",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "421": {
      "mapping": {
        "id": 421,
        "name": "fab1/53/6",
        "controllingPort": 421,
        "pins": [
          {
            "a": {
              "chip": "BC25",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/53",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/53",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/53",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "422": {
      "mapping": {
        "id": 422,
        "name": "fab1/53/7",
        "controllingPort": 422,
        "pins": [
          {
            "a": {
              "chip": "BC38",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/53",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/53",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/53",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "423": {
      "mapping": {
        "id": 423,
        "name": "fab1/53/8",
        "controllingPort": 423,
        "pins": [
          {
            "a": {
              "chip": "BC25",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/53",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/53",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/53",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "424": {
      "mapping": {
        "id": 424,
        "name": "fab1/54/1",
        "controllingPort": 424,
        "pins": [
          {
            "a": {
              "chip": "BC37",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/54",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/54",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/54",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "425": {
      "mapping": {
        "id": 425,
        "name": "fab1/54/2",
        "controllingPort": 425,
        "pins": [
          {
            "a": {
              "chip": "BC26",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/54",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/54",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/54",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "426": {
      "mapping": {
        "id": 426,
        "name": "fab1/54/3",
        "controllingPort": 426,
        "pins": [
          {
            "a": {
              "chip": "BC37",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/54",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/54",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/54",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "427": {
      "mapping": {
        "id": 427,
        "name": "fab1/54/4",
        "controllingPort": 427,
        "pins": [
          {
            "a": {
              "chip": "BC26",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/54",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/54",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/54",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "428": {
      "mapping": {
        "id": 428,
        "name": "fab1/54/5",
        "controllingPort": 428,
        "pins": [
          {
            "a": {
              "chip": "BC36",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/54",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/54",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/54",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "429": {
      "mapping": {
        "id": 429,
        "name": "fab1/54/6",
        "controllingPort": 429,
        "pins": [
          {
            "a": {
              "chip": "BC27",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/54",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/54",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/54",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "430": {
      "mapping": {
        "id": 430,
        "name": "fab1/54/7",
        "controllingPort": 430,
        "pins": [
          {
            "a": {
              "chip": "BC36",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/54",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/54",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/54",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "431": {
      "mapping": {
        "id": 431,
        "name": "fab1/54/8",
        "controllingPort": 431,
        "pins": [
          {
            "a": {
              "chip": "BC27",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/54",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/54",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/54",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "432": {
      "mapping": {
        "id": 432,
        "name": "fab1/55/1",
        "controllingPort": 432,
        "pins": [
          {
            "a": {
              "chip": "BC39",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/55",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/55",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/55",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "433": {
      "mapping": {
        "id": 433,
        "name": "fab1/55/2",
        "controllingPort": 433,
        "pins": [
          {
            "a": {
              "chip": "BC24",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/55",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/55",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/55",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "434": {
      "mapping": {
        "id": 434,
        "name": "fab1/55/3",
        "controllingPort": 434,
        "pins": [
          {
            "a": {
              "chip": "BC39",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/55",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/55",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/55",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "435": {
      "mapping": {
        "id": 435,
        "name": "fab1/55/4",
        "controllingPort": 435,
        "pins": [
          {
            "a": {
              "chip": "BC24",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/55",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/55",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/55",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "436": {
      "mapping": {
        "id": 436,
        "name": "fab1/55/5",
        "controllingPort": 436,
        "pins": [
          {
            "a": {
              "chip": "BC38",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/55",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/55",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/55",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "437": {
      "mapping": {
        "id": 437,
        "name": "fab1/55/6",
        "controllingPort": 437,
        "pins": [
          {
            "a": {
              "chip": "BC25",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/55",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/55",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/55",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "438": {
      "mapping": {
        "id": 438,
        "name": "fab1/55/7",
        "controllingPort": 438,
        "pins": [
          {
            "a": {
              "chip": "BC38",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/55",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/55",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/55",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "439": {
      "mapping": {
        "id": 439,
        "name": "fab1/55/8",
        "controllingPort": 439,
        "pins": [
          {
            "a": {
              "chip": "BC25",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/55",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/55",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/55",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "440": {
      "mapping": {
        "id": 440,
        "name": "fab1/56/1",
        "controllingPort": 440,
        "pins": [
          {
            "a": {
              "chip": "BC37",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/56",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/56",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/56",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "441": {
      "mapping": {
        "id": 441,
        "name": "fab1/56/2",
        "controllingPort": 441,
        "pins": [
          {
            "a": {
              "chip": "BC26",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/56",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/56",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/56",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "442": {
      "mapping": {
        "id": 442,
        "name": "fab1/56/3",
        "controllingPort": 442,
        "pins": [
          {
            "a": {
              "chip": "BC37",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/56",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/56",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/56",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "443": {
      "mapping": {
        "id": 443,
        "name": "fab1/56/4",
        "controllingPort": 443,
        "pins": [
          {
            "a": {
              "chip": "BC26",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/56",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/56",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/56",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "444": {
      "mapping": {
        "id": 444,
        "name": "fab1/56/5",
        "controllingPort": 444,
        "pins": [
          {
            "a": {
              "chip": "BC36",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/56",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/56",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/56",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "445": {
      "mapping": {
        "id": 445,
        "name": "fab1/56/6",
        "controllingPort": 445,
        "pins": [
          {
            "a": {
              "chip": "BC27",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/56",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/56",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/56",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "446": {
      "mapping": {
        "id": 446,
        "name": "fab1/56/7",
        "controllingPort": 446,
        "pins": [
          {
            "a": {
              "chip": "BC36",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/56",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/56",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/56",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "447": {
      "mapping": {
        "id": 447,
        "name": "fab1/56/8",
        "controllingPort": 447,
        "pins": [
          {
            "a": {
              "chip": "BC27",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/56",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/56",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/56",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "448": {
      "mapping": {
        "id": 448,
        "name": "fab1/57/1",
        "controllingPort": 448,
        "pins": [
          {
            "a": {
              "chip": "BC35",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/57",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/57",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/57",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "449": {
      "mapping": {
        "id": 449,
        "name": "fab1/57/2",
        "controllingPort": 449,
        "pins": [
          {
            "a": {
              "chip": "BC28",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/57",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/57",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/57",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "450": {
      "mapping": {
        "id": 450,
        "name": "fab1/57/3",
        "controllingPort": 450,
        "pins": [
          {
            "a": {
              "chip": "BC35",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/57",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/57",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/57",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "451": {
      "mapping": {
        "id": 451,
        "name": "fab1/57/4",
        "controllingPort": 451,
        "pins": [
          {
            "a": {
              "chip": "BC28",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/57",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/57",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/57",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "452": {
      "mapping": {
        "id": 452,
        "name": "fab1/57/5",
        "controllingPort": 452,
        "pins": [
          {
            "a": {
              "chip": "BC34",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/57",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/57",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/57",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "453": {
      "mapping": {
        "id": 453,
        "name": "fab1/57/6",
        "controllingPort": 453,
        "pins": [
          {
            "a": {
              "chip": "BC29",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/57",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/57",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/57",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "454": {
      "mapping": {
        "id": 454,
        "name": "fab1/57/7",
        "controllingPort": 454,
        "pins": [
          {
            "a": {
              "chip": "BC34",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/57",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/57",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/57",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "455": {
      "mapping": {
        "id": 455,
        "name": "fab1/57/8",
        "controllingPort": 455,
        "pins": [
          {
            "a": {
              "chip": "BC29",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/57",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/57",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/57",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "456": {
      "mapping": {
        "id": 456,
        "name": "fab1/58/1",
        "controllingPort": 456,
        "pins": [
          {
            "a": {
              "chip": "BC33",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/58",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/58",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/58",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "457": {
      "mapping": {
        "id": 457,
        "name": "fab1/58/2",
        "controllingPort": 457,
        "pins": [
          {
            "a": {
              "chip": "BC30",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/58",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/58",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/58",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "458": {
      "mapping": {
        "id": 458,
        "name": "fab1/58/3",
        "controllingPort": 458,
        "pins": [
          {
            "a": {
              "chip": "BC33",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/58",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/58",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/58",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "459": {
      "mapping": {
        "id": 459,
        "name": "fab1/58/4",
        "controllingPort": 459,
        "pins": [
          {
            "a": {
              "chip": "BC30",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/58",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/58",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/58",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "460": {
      "mapping": {
        "id": 460,
        "name": "fab1/58/5",
        "controllingPort": 460,
        "pins": [
          {
            "a": {
              "chip": "BC32",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/58",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/58",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/58",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "461": {
      "mapping": {
        "id": 461,
        "name": "fab1/58/6",
        "controllingPort": 461,
        "pins": [
          {
            "a": {
              "chip": "BC31",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/58",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/58",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/58",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "462": {
      "mapping": {
        "id": 462,
        "name": "fab1/58/7",
        "controllingPort": 462,
        "pins": [
          {
            "a": {
              "chip": "BC32",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/58",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/58",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/58",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "463": {
      "mapping": {
        "id": 463,
        "name": "fab1/58/8",
        "controllingPort": 463,
        "pins": [
          {
            "a": {
              "chip": "BC31",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/58",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/58",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/58",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "464": {
      "mapping": {
        "id": 464,
        "name": "fab1/59/1",
        "controllingPort": 464,
        "pins": [
          {
            "a": {
              "chip": "BC35",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/59",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/59",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/59",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "465": {
      "mapping": {
        "id": 465,
        "name": "fab1/59/2",
        "controllingPort": 465,
        "pins": [
          {
            "a": {
              "chip": "BC28",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/59",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/59",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/59",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "466": {
      "mapping": {
        "id": 466,
        "name": "fab1/59/3",
        "controllingPort": 466,
        "pins": [
          {
            "a": {
              "chip": "BC35",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/59",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/59",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/59",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "467": {
      "mapping": {
        "id": 467,
        "name": "fab1/59/4",
        "controllingPort": 467,
        "pins": [
          {
            "a": {
              "chip": "BC28",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/59",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/59",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/59",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "468": {
      "mapping": {
        "id": 468,
        "name": "fab1/59/5",
        "controllingPort": 468,
        "pins": [
          {
            "a": {
              "chip": "BC34",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/59",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/59",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/59",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "469": {
      "mapping": {
        "id": 469,
        "name": "fab1/59/6",
        "controllingPort": 469,
        "pins": [
          {
            "a": {
              "chip": "BC29",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/59",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/59",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/59",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "470": {
      "mapping": {
        "id": 470,
        "name": "fab1/59/7",
        "controllingPort": 470,
        "pins": [
          {
            "a": {
              "chip": "BC34",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/59",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/59",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/59",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "471": {
      "mapping": {
        "id": 471,
        "name": "fab1/59/8",
        "controllingPort": 471,
        "pins": [
          {
            "a": {
              "chip": "BC29",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/59",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/59",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/59",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "472": {
      "mapping": {
        "id": 472,
        "name": "fab1/60/1",
        "controllingPort": 472,
        "pins": [
          {
            "a": {
              "chip": "BC33",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/60",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/60",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/60",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "473": {
      "mapping": {
        "id": 473,
        "name": "fab1/60/2",
        "controllingPort": 473,
        "pins": [
          {
            "a": {
              "chip": "BC30",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/60",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/60",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/60",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "474": {
      "mapping": {
        "id": 474,
        "name": "fab1/60/3",
        "controllingPort": 474,
        "pins": [
          {
            "a": {
              "chip": "BC33",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/60",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/60",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/60",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "475": {
      "mapping": {
        "id": 475,
        "name": "fab1/60/4",
        "controllingPort": 475,
        "pins": [
          {
            "a": {
              "chip": "BC30",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/60",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/60",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/60",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "476": {
      "mapping": {
        "id": 476,
        "name": "fab1/60/5",
        "controllingPort": 476,
        "pins": [
          {
            "a": {
              "chip": "BC32",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/60",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/60",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/60",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "477": {
      "mapping": {
        "id": 477,
        "name": "fab1/60/6",
        "controllingPort": 477,
        "pins": [
          {
            "a": {
              "chip": "BC31",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/60",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/60",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/60",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "478": {
      "mapping": {
        "id": 478,
        "name": "fab1/60/7",
        "controllingPort": 478,
        "pins": [
          {
            "a": {
              "chip": "BC32",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/60",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/60",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/60",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "479": {
      "mapping": {
        "id": 479,
        "name": "fab1/60/8",
        "controllingPort": 479,
        "pins": [
          {
            "a": {
              "chip": "BC31",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/60",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/60",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/60",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "480": {
      "mapping": {
        "id": 480,
        "name": "fab1/61/1",
        "controllingPort": 480,
        "pins": [
          {
            "a": {
              "chip": "BC34",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/61",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/61",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/61",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "481": {
      "mapping": {
        "id": 481,
        "name": "fab1/61/2",
        "controllingPort": 481,
        "pins": [
          {
            "a": {
              "chip": "BC29",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/61",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/61",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/61",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "482": {
      "mapping": {
        "id": 482,
        "name": "fab1/61/3",
        "controllingPort": 482,
        "pins": [
          {
            "a": {
              "chip": "BC34",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/61",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/61",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/61",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "483": {
      "mapping": {
        "id": 483,
        "name": "fab1/61/4",
        "controllingPort": 483,
        "pins": [
          {
            "a": {
              "chip": "BC29",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/61",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/61",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/61",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "484": {
      "mapping": {
        "id": 484,
        "name": "fab1/61/5",
        "controllingPort": 484,
        "pins": [
          {
            "a": {
              "chip": "BC35",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/61",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/61",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/61",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "485": {
      "mapping": {
        "id": 485,
        "name": "fab1/61/6",
        "controllingPort": 485,
        "pins": [
          {
            "a": {
              "chip": "BC28",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/61",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/61",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/61",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "486": {
      "mapping": {
        "id": 486,
        "name": "fab1/61/7",
        "controllingPort": 486,
        "pins": [
          {
            "a": {
              "chip": "BC35",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/61",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/61",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/61",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "487": {
      "mapping": {
        "id": 487,
        "name": "fab1/61/8",
        "controllingPort": 487,
        "pins": [
          {
            "a": {
              "chip": "BC28",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/61",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/61",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/61",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "488": {
      "mapping": {
        "id": 488,
        "name": "fab1/62/1",
        "controllingPort": 488,
        "pins": [
          {
            "a": {
              "chip": "BC32",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/62",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/62",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/62",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "489": {
      "mapping": {
        "id": 489,
        "name": "fab1/62/2",
        "controllingPort": 489,
        "pins": [
          {
            "a": {
              "chip": "BC31",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/62",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/62",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/62",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "490": {
      "mapping": {
        "id": 490,
        "name": "fab1/62/3",
        "controllingPort": 490,
        "pins": [
          {
            "a": {
              "chip": "BC32",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/62",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/62",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/62",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "491": {
      "mapping": {
        "id": 491,
        "name": "fab1/62/4",
        "controllingPort": 491,
        "pins": [
          {
            "a": {
              "chip": "BC31",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/62",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/62",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/62",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "492": {
      "mapping": {
        "id": 492,
        "name": "fab1/62/5",
        "controllingPort": 492,
        "pins": [
          {
            "a": {
              "chip": "BC33",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/62",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/62",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/62",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "493": {
      "mapping": {
        "id": 493,
        "name": "fab1/62/6",
        "controllingPort": 493,
        "pins": [
          {
            "a": {
              "chip": "BC30",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/62",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/62",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/62",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "494": {
      "mapping": {
        "id": 494,
        "name": "fab1/62/7",
        "controllingPort": 494,
        "pins": [
          {
            "a": {
              "chip": "BC33",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/62",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/62",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/62",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "495": {
      "mapping": {
        "id": 495,
        "name": "fab1/62/8",
        "controllingPort": 495,
        "pins": [
          {
            "a": {
              "chip": "BC30",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/62",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/62",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/62",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "496": {
      "mapping": {
        "id": 496,
        "name": "fab1/63/1",
        "controllingPort": 496,
        "pins": [
          {
            "a": {
              "chip": "BC34",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/63",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/63",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/63",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "497": {
      "mapping": {
        "id": 497,
        "name": "fab1/63/2",
        "controllingPort": 497,
        "pins": [
          {
            "a": {
              "chip": "BC29",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/63",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/63",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/63",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "498": {
      "mapping": {
        "id": 498,
        "name": "fab1/63/3",
        "controllingPort": 498,
        "pins": [
          {
            "a": {
              "chip": "BC34",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/63",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/63",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/63",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "499": {
      "mapping": {
        "id": 499,
        "name": "fab1/63/4",
        "controllingPort": 499,
        "pins": [
          {
            "a": {
              "chip": "BC29",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/63",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/63",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/63",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "500": {
      "mapping": {
        "id": 500,
        "name": "fab1/63/5",
        "controllingPort": 500,
        "pins": [
          {
            "a": {
              "chip": "BC35",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/63",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/63",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/63",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "501": {
      "mapping": {
        "id": 501,
        "name": "fab1/63/6",
        "controllingPort": 501,
        "pins": [
          {
            "a": {
              "chip": "BC28",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/63",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/63",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/63",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "502": {
      "mapping": {
        "id": 502,
        "name": "fab1/63/7",
        "controllingPort": 502,
        "pins": [
          {
            "a": {
              "chip": "BC35",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/63",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/63",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/63",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "503": {
      "mapping": {
        "id": 503,
        "name": "fab1/63/8",
        "controllingPort": 503,
        "pins": [
          {
            "a": {
              "chip": "BC28",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/63",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/63",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/63",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "504": {
      "mapping": {
        "id": 504,
        "name": "fab1/64/1",
        "controllingPort": 504,
        "pins": [
          {
            "a": {
              "chip": "BC32",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/64",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/64",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/64",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "505": {
      "mapping": {
        "id": 505,
        "name": "fab1/64/2",
        "controllingPort": 505,
        "pins": [
          {
            "a": {
              "chip": "BC31",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/64",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/64",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/64",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "506": {
      "mapping": {
        "id": 506,
        "name": "fab1/64/3",
        "controllingPort": 506,
        "pins": [
          {
            "a": {
              "chip": "BC32",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/64",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/64",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/64",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "507": {
      "mapping": {
        "id": 507,
        "name": "fab1/64/4",
        "controllingPort": 507,
        "pins": [
          {
            "a": {
              "chip": "BC31",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/64",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/64",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/64",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "508": {
      "mapping": {
        "id": 508,
        "name": "fab1/64/5",
        "controllingPort": 508,
        "pins": [
          {
            "a": {
              "chip": "BC33",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/64",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/64",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/64",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "509": {
      "mapping": {
        "id": 509,
        "name": "fab1/64/6",
        "controllingPort": 509,
        "pins": [
          {
            "a": {
              "chip": "BC30",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/64",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/64",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/64",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "510": {
      "mapping": {
        "id": 510,
        "name": "fab1/64/7",
        "controllingPort": 510,
        "pins": [
          {
            "a": {
              "chip": "BC33",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/64",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/64",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/64",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "511": {
      "mapping": {
        "id": 511,
        "name": "fab1/64/8",
        "controllingPort": 511,
        "pins": [
          {
            "a": {
              "chip": "BC30",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/64",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/64",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/64",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "512": {
      "mapping": {
        "id": 512,
        "name": "fab1/65/1",
        "controllingPort": 512,
        "pins": [
          {
            "a": {
              "chip": "BC31",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/65",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/65",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/65",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "513": {
      "mapping": {
        "id": 513,
        "name": "fab1/65/2",
        "controllingPort": 513,
        "pins": [
          {
            "a": {
              "chip": "BC32",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/65",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/65",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/65",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "514": {
      "mapping": {
        "id": 514,
        "name": "fab1/65/3",
        "controllingPort": 514,
        "pins": [
          {
            "a": {
              "chip": "BC31",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/65",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/65",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/65",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "515": {
      "mapping": {
        "id": 515,
        "name": "fab1/65/4",
        "controllingPort": 515,
        "pins": [
          {
            "a": {
              "chip": "BC32",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/65",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/65",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/65",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "516": {
      "mapping": {
        "id": 516,
        "name": "fab1/65/5",
        "controllingPort": 516,
        "pins": [
          {
            "a": {
              "chip": "BC30",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/65",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/65",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/65",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "517": {
      "mapping": {
        "id": 517,
        "name": "fab1/65/6",
        "controllingPort": 517,
        "pins": [
          {
            "a": {
              "chip": "BC33",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/65",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/65",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/65",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "518": {
      "mapping": {
        "id": 518,
        "name": "fab1/65/7",
        "controllingPort": 518,
        "pins": [
          {
            "a": {
              "chip": "BC30",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/65",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/65",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/65",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "519": {
      "mapping": {
        "id": 519,
        "name": "fab1/65/8",
        "controllingPort": 519,
        "pins": [
          {
            "a": {
              "chip": "BC33",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/65",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/65",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/65",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "520": {
      "mapping": {
        "id": 520,
        "name": "fab1/66/1",
        "controllingPort": 520,
        "pins": [
          {
            "a": {
              "chip": "BC29",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/66",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/66",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/66",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "521": {
      "mapping": {
        "id": 521,
        "name": "fab1/66/2",
        "controllingPort": 521,
        "pins": [
          {
            "a": {
              "chip": "BC34",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/66",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/66",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/66",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "522": {
      "mapping": {
        "id": 522,
        "name": "fab1/66/3",
        "controllingPort": 522,
        "pins": [
          {
            "a": {
              "chip": "BC29",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/66",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/66",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/66",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "523": {
      "mapping": {
        "id": 523,
        "name": "fab1/66/4",
        "controllingPort": 523,
        "pins": [
          {
            "a": {
              "chip": "BC34",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/66",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/66",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/66",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "524": {
      "mapping": {
        "id": 524,
        "name": "fab1/66/5",
        "controllingPort": 524,
        "pins": [
          {
            "a": {
              "chip": "BC28",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/66",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/66",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/66",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "525": {
      "mapping": {
        "id": 525,
        "name": "fab1/66/6",
        "controllingPort": 525,
        "pins": [
          {
            "a": {
              "chip": "BC35",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/66",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/66",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/66",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "526": {
      "mapping": {
        "id": 526,
        "name": "fab1/66/7",
        "controllingPort": 526,
        "pins": [
          {
            "a": {
              "chip": "BC28",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/66",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/66",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/66",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "527": {
      "mapping": {
        "id": 527,
        "name": "fab1/66/8",
        "controllingPort": 527,
        "pins": [
          {
            "a": {
              "chip": "BC35",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/66",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/66",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/66",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "528": {
      "mapping": {
        "id": 528,
        "name": "fab1/67/1",
        "controllingPort": 528,
        "pins": [
          {
            "a": {
              "chip": "BC31",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/67",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/67",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/67",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "529": {
      "mapping": {
        "id": 529,
        "name": "fab1/67/2",
        "controllingPort": 529,
        "pins": [
          {
            "a": {
              "chip": "BC32",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/67",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/67",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/67",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "530": {
      "mapping": {
        "id": 530,
        "name": "fab1/67/3",
        "controllingPort": 530,
        "pins": [
          {
            "a": {
              "chip": "BC31",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/67",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/67",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/67",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "531": {
      "mapping": {
        "id": 531,
        "name": "fab1/67/4",
        "controllingPort": 531,
        "pins": [
          {
            "a": {
              "chip": "BC32",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/67",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/67",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/67",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "532": {
      "mapping": {
        "id": 532,
        "name": "fab1/67/5",
        "controllingPort": 532,
        "pins": [
          {
            "a": {
              "chip": "BC30",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/67",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/67",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/67",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "533": {
      "mapping": {
        "id": 533,
        "name": "fab1/67/6",
        "controllingPort": 533,
        "pins": [
          {
            "a": {
              "chip": "BC33",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/67",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/67",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/67",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "534": {
      "mapping": {
        "id": 534,
        "name": "fab1/67/7",
        "controllingPort": 534,
        "pins": [
          {
            "a": {
              "chip": "BC30",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/67",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/67",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/67",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "535": {
      "mapping": {
        "id": 535,
        "name": "fab1/67/8",
        "controllingPort": 535,
        "pins": [
          {
            "a": {
              "chip": "BC33",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/67",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/67",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/67",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "536": {
      "mapping": {
        "id": 536,
        "name": "fab1/68/1",
        "controllingPort": 536,
        "pins": [
          {
            "a": {
              "chip": "BC29",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/68",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/68",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/68",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "537": {
      "mapping": {
        "id": 537,
        "name": "fab1/68/2",
        "controllingPort": 537,
        "pins": [
          {
            "a": {
              "chip": "BC34",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/68",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/68",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/68",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "538": {
      "mapping": {
        "id": 538,
        "name": "fab1/68/3",
        "controllingPort": 538,
        "pins": [
          {
            "a": {
              "chip": "BC29",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/68",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/68",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/68",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "539": {
      "mapping": {
        "id": 539,
        "name": "fab1/68/4",
        "controllingPort": 539,
        "pins": [
          {
            "a": {
              "chip": "BC34",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/68",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/68",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/68",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "540": {
      "mapping": {
        "id": 540,
        "name": "fab1/68/5",
        "controllingPort": 540,
        "pins": [
          {
            "a": {
              "chip": "BC28",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/68",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/68",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/68",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "541": {
      "mapping": {
        "id": 541,
        "name": "fab1/68/6",
        "controllingPort": 541,
        "pins": [
          {
            "a": {
              "chip": "BC35",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/68",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/68",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/68",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "542": {
      "mapping": {
        "id": 542,
        "name": "fab1/68/7",
        "controllingPort": 542,
        "pins": [
          {
            "a": {
              "chip": "BC28",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/68",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/68",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/68",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "543": {
      "mapping": {
        "id": 543,
        "name": "fab1/68/8",
        "controllingPort": 543,
        "pins": [
          {
            "a": {
              "chip": "BC35",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/68",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/68",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/68",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "544": {
      "mapping": {
        "id": 544,
        "name": "fab1/69/1",
        "controllingPort": 544,
        "pins": [
          {
            "a": {
              "chip": "BC30",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/69",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/69",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/69",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "545": {
      "mapping": {
        "id": 545,
        "name": "fab1/69/2",
        "controllingPort": 545,
        "pins": [
          {
            "a": {
              "chip": "BC33",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/69",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/69",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/69",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "546": {
      "mapping": {
        "id": 546,
        "name": "fab1/69/3",
        "controllingPort": 546,
        "pins": [
          {
            "a": {
              "chip": "BC30",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/69",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/69",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/69",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "547": {
      "mapping": {
        "id": 547,
        "name": "fab1/69/4",
        "controllingPort": 547,
        "pins": [
          {
            "a": {
              "chip": "BC33",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/69",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/69",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/69",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "548": {
      "mapping": {
        "id": 548,
        "name": "fab1/69/5",
        "controllingPort": 548,
        "pins": [
          {
            "a": {
              "chip": "BC31",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/69",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/69",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/69",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "549": {
      "mapping": {
        "id": 549,
        "name": "fab1/69/6",
        "controllingPort": 549,
        "pins": [
          {
            "a": {
              "chip": "BC32",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/69",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/69",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/69",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "550": {
      "mapping": {
        "id": 550,
        "name": "fab1/69/7",
        "controllingPort": 550,
        "pins": [
          {
            "a": {
              "chip": "BC31",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/69",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/69",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/69",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "551": {
      "mapping": {
        "id": 551,
        "name": "fab1/69/8",
        "controllingPort": 551,
        "pins": [
          {
            "a": {
              "chip": "BC32",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/69",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/69",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/69",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "552": {
      "mapping": {
        "id": 552,
        "name": "fab1/70/1",
        "controllingPort": 552,
        "pins": [
          {
            "a": {
              "chip": "BC28",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/70",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/70",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/70",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "553": {
      "mapping": {
        "id": 553,
        "name": "fab1/70/2",
        "controllingPort": 553,
        "pins": [
          {
            "a": {
              "chip": "BC35",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/70",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/70",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/70",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "554": {
      "mapping": {
        "id": 554,
        "name": "fab1/70/3",
        "controllingPort": 554,
        "pins": [
          {
            "a": {
              "chip": "BC28",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/70",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/70",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/70",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "555": {
      "mapping": {
        "id": 555,
        "name": "fab1/70/4",
        "controllingPort": 555,
        "pins": [
          {
            "a": {
              "chip": "BC35",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/70",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/70",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/70",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "556": {
      "mapping": {
        "id": 556,
        "name": "fab1/70/5",
        "controllingPort": 556,
        "pins": [
          {
            "a": {
              "chip": "BC29",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/70",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/70",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/70",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "557": {
      "mapping": {
        "id": 557,
        "name": "fab1/70/6",
        "controllingPort": 557,
        "pins": [
          {
            "a": {
              "chip": "BC34",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/70",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/70",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/70",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "558": {
      "mapping": {
        "id": 558,
        "name": "fab1/70/7",
        "controllingPort": 558,
        "pins": [
          {
            "a": {
              "chip": "BC29",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/70",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/70",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/70",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "559": {
      "mapping": {
        "id": 559,
        "name": "fab1/70/8",
        "controllingPort": 559,
        "pins": [
          {
            "a": {
              "chip": "BC34",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/70",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/70",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/70",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "560": {
      "mapping": {
        "id": 560,
        "name": "fab1/71/1",
        "controllingPort": 560,
        "pins": [
          {
            "a": {
              "chip": "BC30",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/71",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/71",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/71",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "561": {
      "mapping": {
        "id": 561,
        "name": "fab1/71/2",
        "controllingPort": 561,
        "pins": [
          {
            "a": {
              "chip": "BC33",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/71",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/71",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/71",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "562": {
      "mapping": {
        "id": 562,
        "name": "fab1/71/3",
        "controllingPort": 562,
        "pins": [
          {
            "a": {
              "chip": "BC30",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/71",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/71",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC30",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/71",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "563": {
      "mapping": {
        "id": 563,
        "name": "fab1/71/4",
        "controllingPort": 563,
        "pins": [
          {
            "a": {
              "chip": "BC33",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/71",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/71",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC33",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/71",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "564": {
      "mapping": {
        "id": 564,
        "name": "fab1/71/5",
        "controllingPort": 564,
        "pins": [
          {
            "a": {
              "chip": "BC31",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/71",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/71",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/71",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "565": {
      "mapping": {
        "id": 565,
        "name": "fab1/71/6",
        "controllingPort": 565,
        "pins": [
          {
            "a": {
              "chip": "BC32",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/71",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/71",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/71",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "566": {
      "mapping": {
        "id": 566,
        "name": "fab1/71/7",
        "controllingPort": 566,
        "pins": [
          {
            "a": {
              "chip": "BC31",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/71",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/71",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC31",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/71",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "567": {
      "mapping": {
        "id": 567,
        "name": "fab1/71/8",
        "controllingPort": 567,
        "pins": [
          {
            "a": {
              "chip": "BC32",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/71",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/71",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC32",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/71",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "568": {
      "mapping": {
        "id": 568,
        "name": "fab1/72/1",
        "controllingPort": 568,
        "pins": [
          {
            "a": {
              "chip": "BC28",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/72",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/72",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/72",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "569": {
      "mapping": {
        "id": 569,
        "name": "fab1/72/2",
        "controllingPort": 569,
        "pins": [
          {
            "a": {
              "chip": "BC35",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/72",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/72",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/72",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "570": {
      "mapping": {
        "id": 570,
        "name": "fab1/72/3",
        "controllingPort": 570,
        "pins": [
          {
            "a": {
              "chip": "BC28",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/72",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/72",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC28",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/72",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "571": {
      "mapping": {
        "id": 571,
        "name": "fab1/72/4",
        "controllingPort": 571,
        "pins": [
          {
            "a": {
              "chip": "BC35",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/72",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/72",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC35",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/72",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "572": {
      "mapping": {
        "id": 572,
        "name": "fab1/72/5",
        "controllingPort": 572,
        "pins": [
          {
            "a": {
              "chip": "BC29",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/72",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/72",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/72",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "573": {
      "mapping": {
        "id": 573,
        "name": "fab1/72/6",
        "controllingPort": 573,
        "pins": [
          {
            "a": {
              "chip": "BC34",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/72",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/72",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/72",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "574": {
      "mapping": {
        "id": 574,
        "name": "fab1/72/7",
        "controllingPort": 574,
        "pins": [
          {
            "a": {
              "chip": "BC29",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/72",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/72",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC29",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/72",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "575": {
      "mapping": {
        "id": 575,
        "name": "fab1/72/8",
        "controllingPort": 575,
        "pins": [
          {
            "a": {
              "chip": "BC34",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/72",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/72",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC34",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/72",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "576": {
      "mapping": {
        "id": 576,
        "name": "fab1/73/1",
        "controllingPort": 576,
        "pins": [
          {
            "a": {
              "chip": "BC27",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/73",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/73",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/73",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "577": {
      "mapping": {
        "id": 577,
        "name": "fab1/73/2",
        "controllingPort": 577,
        "pins": [
          {
            "a": {
              "chip": "BC36",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/73",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/73",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/73",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "578": {
      "mapping": {
        "id": 578,
        "name": "fab1/73/3",
        "controllingPort": 578,
        "pins": [
          {
            "a": {
              "chip": "BC27",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/73",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/73",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/73",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "579": {
      "mapping": {
        "id": 579,
        "name": "fab1/73/4",
        "controllingPort": 579,
        "pins": [
          {
            "a": {
              "chip": "BC36",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/73",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/73",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/73",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "580": {
      "mapping": {
        "id": 580,
        "name": "fab1/73/5",
        "controllingPort": 580,
        "pins": [
          {
            "a": {
              "chip": "BC26",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/73",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/73",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/73",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "581": {
      "mapping": {
        "id": 581,
        "name": "fab1/73/6",
        "controllingPort": 581,
        "pins": [
          {
            "a": {
              "chip": "BC37",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/73",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/73",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/73",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "582": {
      "mapping": {
        "id": 582,
        "name": "fab1/73/7",
        "controllingPort": 582,
        "pins": [
          {
            "a": {
              "chip": "BC26",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/73",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/73",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/73",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "583": {
      "mapping": {
        "id": 583,
        "name": "fab1/73/8",
        "controllingPort": 583,
        "pins": [
          {
            "a": {
              "chip": "BC37",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/73",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/73",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/73",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "584": {
      "mapping": {
        "id": 584,
        "name": "fab1/74/1",
        "controllingPort": 584,
        "pins": [
          {
            "a": {
              "chip": "BC25",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/74",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/74",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/74",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "585": {
      "mapping": {
        "id": 585,
        "name": "fab1/74/2",
        "controllingPort": 585,
        "pins": [
          {
            "a": {
              "chip": "BC38",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/74",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/74",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/74",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "586": {
      "mapping": {
        "id": 586,
        "name": "fab1/74/3",
        "controllingPort": 586,
        "pins": [
          {
            "a": {
              "chip": "BC25",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/74",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/74",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/74",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "587": {
      "mapping": {
        "id": 587,
        "name": "fab1/74/4",
        "controllingPort": 587,
        "pins": [
          {
            "a": {
              "chip": "BC38",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/74",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/74",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/74",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "588": {
      "mapping": {
        "id": 588,
        "name": "fab1/74/5",
        "controllingPort": 588,
        "pins": [
          {
            "a": {
              "chip": "BC24",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/74",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/74",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/74",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "589": {
      "mapping": {
        "id": 589,
        "name": "fab1/74/6",
        "controllingPort": 589,
        "pins": [
          {
            "a": {
              "chip": "BC39",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/74",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/74",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/74",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "590": {
      "mapping": {
        "id": 590,
        "name": "fab1/74/7",
        "controllingPort": 590,
        "pins": [
          {
            "a": {
              "chip": "BC24",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/74",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/74",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/74",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "591": {
      "mapping": {
        "id": 591,
        "name": "fab1/74/8",
        "controllingPort": 591,
        "pins": [
          {
            "a": {
              "chip": "BC39",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/74",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/74",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/74",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "592": {
      "mapping": {
        "id": 592,
        "name": "fab1/75/1",
        "controllingPort": 592,
        "pins": [
          {
            "a": {
              "chip": "BC27",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/75",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/75",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/75",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "593": {
      "mapping": {
        "id": 593,
        "name": "fab1/75/2",
        "controllingPort": 593,
        "pins": [
          {
            "a": {
              "chip": "BC36",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/75",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/75",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/75",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "594": {
      "mapping": {
        "id": 594,
        "name": "fab1/75/3",
        "controllingPort": 594,
        "pins": [
          {
            "a": {
              "chip": "BC27",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/75",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/75",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/75",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "595": {
      "mapping": {
        "id": 595,
        "name": "fab1/75/4",
        "controllingPort": 595,
        "pins": [
          {
            "a": {
              "chip": "BC36",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/75",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/75",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/75",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "596": {
      "mapping": {
        "id": 596,
        "name": "fab1/75/5",
        "controllingPort": 596,
        "pins": [
          {
            "a": {
              "chip": "BC26",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/75",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/75",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/75",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "597": {
      "mapping": {
        "id": 597,
        "name": "fab1/75/6",
        "controllingPort": 597,
        "pins": [
          {
            "a": {
              "chip": "BC37",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/75",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/75",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/75",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "598": {
      "mapping": {
        "id": 598,
        "name": "fab1/75/7",
        "controllingPort": 598,
        "pins": [
          {
            "a": {
              "chip": "BC26",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/75",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/75",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/75",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "599": {
      "mapping": {
        "id": 599,
        "name": "fab1/75/8",
        "controllingPort": 599,
        "pins": [
          {
            "a": {
              "chip": "BC37",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/75",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/75",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/75",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "600": {
      "mapping": {
        "id": 600,
        "name": "fab1/76/1",
        "controllingPort": 600,
        "pins": [
          {
            "a": {
              "chip": "BC25",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/76",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/76",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/76",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "601": {
      "mapping": {
        "id": 601,
        "name": "fab1/76/2",
        "controllingPort": 601,
        "pins": [
          {
            "a": {
              "chip": "BC38",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/76",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/76",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/76",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "602": {
      "mapping": {
        "id": 602,
        "name": "fab1/76/3",
        "controllingPort": 602,
        "pins": [
          {
            "a": {
              "chip": "BC25",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/76",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/76",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/76",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "603": {
      "mapping": {
        "id": 603,
        "name": "fab1/76/4",
        "controllingPort": 603,
        "pins": [
          {
            "a": {
              "chip": "BC38",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/76",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/76",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/76",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "604": {
      "mapping": {
        "id": 604,
        "name": "fab1/76/5",
        "controllingPort": 604,
        "pins": [
          {
            "a": {
              "chip": "BC24",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/76",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/76",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/76",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "605": {
      "mapping": {
        "id": 605,
        "name": "fab1/76/6",
        "controllingPort": 605,
        "pins": [
          {
            "a": {
              "chip": "BC39",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/76",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/76",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/76",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "606": {
      "mapping": {
        "id": 606,
        "name": "fab1/76/7",
        "controllingPort": 606,
        "pins": [
          {
            "a": {
              "chip": "BC24",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/76",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/76",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/76",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "607": {
      "mapping": {
        "id": 607,
        "name": "fab1/76/8",
        "controllingPort": 607,
        "pins": [
          {
            "a": {
              "chip": "BC39",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/76",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/76",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/76",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "608": {
      "mapping": {
        "id": 608,
        "name": "fab1/77/1",
        "controllingPort": 608,
        "pins": [
          {
            "a": {
              "chip": "BC27",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/77",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/77",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/77",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "609": {
      "mapping": {
        "id": 609,
        "name": "fab1/77/2",
        "controllingPort": 609,
        "pins": [
          {
            "a": {
              "chip": "BC36",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/77",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/77",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/77",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "610": {
      "mapping": {
        "id": 610,
        "name": "fab1/77/3",
        "controllingPort": 610,
        "pins": [
          {
            "a": {
              "chip": "BC27",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/77",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/77",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/77",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "611": {
      "mapping": {
        "id": 611,
        "name": "fab1/77/4",
        "controllingPort": 611,
        "pins": [
          {
            "a": {
              "chip": "BC36",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/77",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/77",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/77",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "612": {
      "mapping": {
        "id": 612,
        "name": "fab1/77/5",
        "controllingPort": 612,
        "pins": [
          {
            "a": {
              "chip": "BC26",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/77",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/77",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/77",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "613": {
      "mapping": {
        "id": 613,
        "name": "fab1/77/6",
        "controllingPort": 613,
        "pins": [
          {
            "a": {
              "chip": "BC37",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/77",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/77",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/77",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "614": {
      "mapping": {
        "id": 614,
        "name": "fab1/77/7",
        "controllingPort": 614,
        "pins": [
          {
            "a": {
              "chip": "BC26",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/77",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/77",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/77",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "615": {
      "mapping": {
        "id": 615,
        "name": "fab1/77/8",
        "controllingPort": 615,
        "pins": [
          {
            "a": {
              "chip": "BC37",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/77",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/77",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/77",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "616": {
      "mapping": {
        "id": 616,
        "name": "fab1/78/1",
        "controllingPort": 616,
        "pins": [
          {
            "a": {
              "chip": "BC25",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/78",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/78",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/78",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "617": {
      "mapping": {
        "id": 617,
        "name": "fab1/78/2",
        "controllingPort": 617,
        "pins": [
          {
            "a": {
              "chip": "BC38",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/78",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/78",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/78",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "618": {
      "mapping": {
        "id": 618,
        "name": "fab1/78/3",
        "controllingPort": 618,
        "pins": [
          {
            "a": {
              "chip": "BC25",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/78",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/78",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/78",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "619": {
      "mapping": {
        "id": 619,
        "name": "fab1/78/4",
        "controllingPort": 619,
        "pins": [
          {
            "a": {
              "chip": "BC38",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/78",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/78",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/78",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "620": {
      "mapping": {
        "id": 620,
        "name": "fab1/78/5",
        "controllingPort": 620,
        "pins": [
          {
            "a": {
              "chip": "BC24",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/78",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/78",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/78",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "621": {
      "mapping": {
        "id": 621,
        "name": "fab1/78/6",
        "controllingPort": 621,
        "pins": [
          {
            "a": {
              "chip": "BC39",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/78",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/78",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/78",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "622": {
      "mapping": {
        "id": 622,
        "name": "fab1/78/7",
        "controllingPort": 622,
        "pins": [
          {
            "a": {
              "chip": "BC24",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/78",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/78",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/78",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "623": {
      "mapping": {
        "id": 623,
        "name": "fab1/78/8",
        "controllingPort": 623,
        "pins": [
          {
            "a": {
              "chip": "BC39",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/78",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/78",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/78",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "624": {
      "mapping": {
        "id": 624,
        "name": "fab1/79/1",
        "controllingPort": 624,
        "pins": [
          {
            "a": {
              "chip": "BC27",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/79",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/79",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/79",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "625": {
      "mapping": {
        "id": 625,
        "name": "fab1/79/2",
        "controllingPort": 625,
        "pins": [
          {
            "a": {
              "chip": "BC36",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/79",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/79",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/79",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "626": {
      "mapping": {
        "id": 626,
        "name": "fab1/79/3",
        "controllingPort": 626,
        "pins": [
          {
            "a": {
              "chip": "BC27",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/79",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/79",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC27",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/79",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "627": {
      "mapping": {
        "id": 627,
        "name": "fab1/79/4",
        "controllingPort": 627,
        "pins": [
          {
            "a": {
              "chip": "BC36",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/79",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/79",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC36",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/79",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "628": {
      "mapping": {
        "id": 628,
        "name": "fab1/79/5",
        "controllingPort": 628,
        "pins": [
          {
            "a": {
              "chip": "BC26",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/79",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/79",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/79",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "629": {
      "mapping": {
        "id": 629,
        "name": "fab1/79/6",
        "controllingPort": 629,
        "pins": [
          {
            "a": {
              "chip": "BC37",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/79",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/79",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/79",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "630": {
      "mapping": {
        "id": 630,
        "name": "fab1/79/7",
        "controllingPort": 630,
        "pins": [
          {
            "a": {
              "chip": "BC26",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/79",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/79",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC26",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/79",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "631": {
      "mapping": {
        "id": 631,
        "name": "fab1/79/8",
        "controllingPort": 631,
        "pins": [
          {
            "a": {
              "chip": "BC37",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/79",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/79",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC37",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/79",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "632": {
      "mapping": {
        "id": 632,
        "name": "fab1/80/1",
        "controllingPort": 632,
        "pins": [
          {
            "a": {
              "chip": "BC25",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/80",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/80",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/80",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "633": {
      "mapping": {
        "id": 633,
        "name": "fab1/80/2",
        "controllingPort": 633,
        "pins": [
          {
            "a": {
              "chip": "BC38",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/80",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/80",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/80",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "634": {
      "mapping": {
        "id": 634,
        "name": "fab1/80/3",
        "controllingPort": 634,
        "pins": [
          {
            "a": {
              "chip": "BC25",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/80",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/80",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC25",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/80",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "635": {
      "mapping": {
        "id": 635,
        "name": "fab1/80/4",
        "controllingPort": 635,
        "pins": [
          {
            "a": {
              "chip": "BC38",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/80",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/80",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC38",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/80",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "636": {
      "mapping": {
        "id": 636,
        "name": "fab1/80/5",
        "controllingPort": 636,
        "pins": [
          {
            "a": {
              "chip": "BC24",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/80",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/80",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/80",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "637": {
      "mapping": {
        "id": 637,
        "name": "fab1/80/6",
        "controllingPort": 637,
        "pins": [
          {
            "a": {
              "chip": "BC39",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/80",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/80",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/80",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "638": {
      "mapping": {
        "id": 638,
        "name": "fab1/80/7",
        "controllingPort": 638,
        "pins": [
          {
            "a": {
              "chip": "BC24",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/80",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/80",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC24",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/80",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "639": {
      "mapping": {
        "id": 639,
        "name": "fab1/80/8",
        "controllingPort": 639,
        "pins": [
          {
            "a": {
              "chip": "BC39",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/80",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/80",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC39",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/80",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "640": {
      "mapping": {
        "id": 640,
        "name": "fab1/81/1",
        "controllingPort": 640,
        "pins": [
          {
            "a": {
              "chip": "BC23",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/81",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/81",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/81",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "641": {
      "mapping": {
        "id": 641,
        "name": "fab1/81/2",
        "controllingPort": 641,
        "pins": [
          {
            "a": {
              "chip": "BC40",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/81",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/81",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/81",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "642": {
      "mapping": {
        "id": 642,
        "name": "fab1/81/3",
        "controllingPort": 642,
        "pins": [
          {
            "a": {
              "chip": "BC23",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/81",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/81",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/81",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "643": {
      "mapping": {
        "id": 643,
        "name": "fab1/81/4",
        "controllingPort": 643,
        "pins": [
          {
            "a": {
              "chip": "BC40",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/81",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/81",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/81",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "644": {
      "mapping": {
        "id": 644,
        "name": "fab1/81/5",
        "controllingPort": 644,
        "pins": [
          {
            "a": {
              "chip": "BC22",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/81",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/81",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/81",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "645": {
      "mapping": {
        "id": 645,
        "name": "fab1/81/6",
        "controllingPort": 645,
        "pins": [
          {
            "a": {
              "chip": "BC41",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/81",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/81",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/81",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "646": {
      "mapping": {
        "id": 646,
        "name": "fab1/81/7",
        "controllingPort": 646,
        "pins": [
          {
            "a": {
              "chip": "BC22",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/81",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/81",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/81",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "647": {
      "mapping": {
        "id": 647,
        "name": "fab1/81/8",
        "controllingPort": 647,
        "pins": [
          {
            "a": {
              "chip": "BC41",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/81",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/81",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/81",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "648": {
      "mapping": {
        "id": 648,
        "name": "fab1/82/1",
        "controllingPort": 648,
        "pins": [
          {
            "a": {
              "chip": "BC21",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/82",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/82",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/82",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "649": {
      "mapping": {
        "id": 649,
        "name": "fab1/82/2",
        "controllingPort": 649,
        "pins": [
          {
            "a": {
              "chip": "BC42",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/82",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/82",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/82",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "650": {
      "mapping": {
        "id": 650,
        "name": "fab1/82/3",
        "controllingPort": 650,
        "pins": [
          {
            "a": {
              "chip": "BC21",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/82",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/82",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/82",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "651": {
      "mapping": {
        "id": 651,
        "name": "fab1/82/4",
        "controllingPort": 651,
        "pins": [
          {
            "a": {
              "chip": "BC42",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/82",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/82",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/82",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "652": {
      "mapping": {
        "id": 652,
        "name": "fab1/82/5",
        "controllingPort": 652,
        "pins": [
          {
            "a": {
              "chip": "BC20",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/82",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/82",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/82",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "653": {
      "mapping": {
        "id": 653,
        "name": "fab1/82/6",
        "controllingPort": 653,
        "pins": [
          {
            "a": {
              "chip": "BC43",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/82",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/82",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/82",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "654": {
      "mapping": {
        "id": 654,
        "name": "fab1/82/7",
        "controllingPort": 654,
        "pins": [
          {
            "a": {
              "chip": "BC20",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/82",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/82",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/82",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "655": {
      "mapping": {
        "id": 655,
        "name": "fab1/82/8",
        "controllingPort": 655,
        "pins": [
          {
            "a": {
              "chip": "BC43",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/82",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/82",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/82",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "656": {
      "mapping": {
        "id": 656,
        "name": "fab1/83/1",
        "controllingPort": 656,
        "pins": [
          {
            "a": {
              "chip": "BC23",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/83",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/83",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/83",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "657": {
      "mapping": {
        "id": 657,
        "name": "fab1/83/2",
        "controllingPort": 657,
        "pins": [
          {
            "a": {
              "chip": "BC40",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/83",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/83",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/83",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "658": {
      "mapping": {
        "id": 658,
        "name": "fab1/83/3",
        "controllingPort": 658,
        "pins": [
          {
            "a": {
              "chip": "BC23",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/83",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/83",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/83",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "659": {
      "mapping": {
        "id": 659,
        "name": "fab1/83/4",
        "controllingPort": 659,
        "pins": [
          {
            "a": {
              "chip": "BC40",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/83",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/83",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/83",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "660": {
      "mapping": {
        "id": 660,
        "name": "fab1/83/5",
        "controllingPort": 660,
        "pins": [
          {
            "a": {
              "chip": "BC22",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/83",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/83",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/83",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "661": {
      "mapping": {
        "id": 661,
        "name": "fab1/83/6",
        "controllingPort": 661,
        "pins": [
          {
            "a": {
              "chip": "BC41",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/83",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/83",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/83",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "662": {
      "mapping": {
        "id": 662,
        "name": "fab1/83/7",
        "controllingPort": 662,
        "pins": [
          {
            "a": {
              "chip": "BC22",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/83",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/83",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/83",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "663": {
      "mapping": {
        "id": 663,
        "name": "fab1/83/8",
        "controllingPort": 663,
        "pins": [
          {
            "a": {
              "chip": "BC41",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/83",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/83",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/83",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "664": {
      "mapping": {
        "id": 664,
        "name": "fab1/84/1",
        "controllingPort": 664,
        "pins": [
          {
            "a": {
              "chip": "BC21",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/84",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/84",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/84",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "665": {
      "mapping": {
        "id": 665,
        "name": "fab1/84/2",
        "controllingPort": 665,
        "pins": [
          {
            "a": {
              "chip": "BC42",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/84",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/84",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/84",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "666": {
      "mapping": {
        "id": 666,
        "name": "fab1/84/3",
        "controllingPort": 666,
        "pins": [
          {
            "a": {
              "chip": "BC21",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/84",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/84",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/84",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "667": {
      "mapping": {
        "id": 667,
        "name": "fab1/84/4",
        "controllingPort": 667,
        "pins": [
          {
            "a": {
              "chip": "BC42",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/84",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/84",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/84",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "668": {
      "mapping": {
        "id": 668,
        "name": "fab1/84/5",
        "controllingPort": 668,
        "pins": [
          {
            "a": {
              "chip": "BC20",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/84",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/84",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/84",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "669": {
      "mapping": {
        "id": 669,
        "name": "fab1/84/6",
        "controllingPort": 669,
        "pins": [
          {
            "a": {
              "chip": "BC43",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/84",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/84",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/84",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "670": {
      "mapping": {
        "id": 670,
        "name": "fab1/84/7",
        "controllingPort": 670,
        "pins": [
          {
            "a": {
              "chip": "BC20",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/84",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/84",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/84",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "671": {
      "mapping": {
        "id": 671,
        "name": "fab1/84/8",
        "controllingPort": 671,
        "pins": [
          {
            "a": {
              "chip": "BC43",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/84",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/84",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/84",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "672": {
      "mapping": {
        "id": 672,
        "name": "fab1/85/1",
        "controllingPort": 672,
        "pins": [
          {
            "a": {
              "chip": "BC23",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/85",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/85",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/85",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "673": {
      "mapping": {
        "id": 673,
        "name": "fab1/85/2",
        "controllingPort": 673,
        "pins": [
          {
            "a": {
              "chip": "BC40",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/85",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/85",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/85",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "674": {
      "mapping": {
        "id": 674,
        "name": "fab1/85/3",
        "controllingPort": 674,
        "pins": [
          {
            "a": {
              "chip": "BC23",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/85",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/85",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/85",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "675": {
      "mapping": {
        "id": 675,
        "name": "fab1/85/4",
        "controllingPort": 675,
        "pins": [
          {
            "a": {
              "chip": "BC40",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/85",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/85",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/85",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "676": {
      "mapping": {
        "id": 676,
        "name": "fab1/85/5",
        "controllingPort": 676,
        "pins": [
          {
            "a": {
              "chip": "BC22",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/85",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/85",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/85",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "677": {
      "mapping": {
        "id": 677,
        "name": "fab1/85/6",
        "controllingPort": 677,
        "pins": [
          {
            "a": {
              "chip": "BC41",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/85",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/85",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/85",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "678": {
      "mapping": {
        "id": 678,
        "name": "fab1/85/7",
        "controllingPort": 678,
        "pins": [
          {
            "a": {
              "chip": "BC22",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/85",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/85",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/85",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "679": {
      "mapping": {
        "id": 679,
        "name": "fab1/85/8",
        "controllingPort": 679,
        "pins": [
          {
            "a": {
              "chip": "BC41",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/85",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/85",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/85",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "680": {
      "mapping": {
        "id": 680,
        "name": "fab1/86/1",
        "controllingPort": 680,
        "pins": [
          {
            "a": {
              "chip": "BC21",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/86",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/86",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/86",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "681": {
      "mapping": {
        "id": 681,
        "name": "fab1/86/2",
        "controllingPort": 681,
        "pins": [
          {
            "a": {
              "chip": "BC42",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/86",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/86",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/86",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "682": {
      "mapping": {
        "id": 682,
        "name": "fab1/86/3",
        "controllingPort": 682,
        "pins": [
          {
            "a": {
              "chip": "BC21",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/86",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/86",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/86",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "683": {
      "mapping": {
        "id": 683,
        "name": "fab1/86/4",
        "controllingPort": 683,
        "pins": [
          {
            "a": {
              "chip": "BC42",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/86",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/86",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/86",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "684": {
      "mapping": {
        "id": 684,
        "name": "fab1/86/5",
        "controllingPort": 684,
        "pins": [
          {
            "a": {
              "chip": "BC20",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/86",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/86",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/86",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "685": {
      "mapping": {
        "id": 685,
        "name": "fab1/86/6",
        "controllingPort": 685,
        "pins": [
          {
            "a": {
              "chip": "BC43",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/86",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/86",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/86",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "686": {
      "mapping": {
        "id": 686,
        "name": "fab1/86/7",
        "controllingPort": 686,
        "pins": [
          {
            "a": {
              "chip": "BC20",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/86",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/86",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/86",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "687": {
      "mapping": {
        "id": 687,
        "name": "fab1/86/8",
        "controllingPort": 687,
        "pins": [
          {
            "a": {
              "chip": "BC43",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/86",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/86",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/86",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "688": {
      "mapping": {
        "id": 688,
        "name": "fab1/87/1",
        "controllingPort": 688,
        "pins": [
          {
            "a": {
              "chip": "BC23",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/87",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/87",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/87",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "689": {
      "mapping": {
        "id": 689,
        "name": "fab1/87/2",
        "controllingPort": 689,
        "pins": [
          {
            "a": {
              "chip": "BC40",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/87",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/87",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/87",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "690": {
      "mapping": {
        "id": 690,
        "name": "fab1/87/3",
        "controllingPort": 690,
        "pins": [
          {
            "a": {
              "chip": "BC23",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/87",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/87",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC23",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/87",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "691": {
      "mapping": {
        "id": 691,
        "name": "fab1/87/4",
        "controllingPort": 691,
        "pins": [
          {
            "a": {
              "chip": "BC40",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/87",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/87",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC40",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/87",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "692": {
      "mapping": {
        "id": 692,
        "name": "fab1/87/5",
        "controllingPort": 692,
        "pins": [
          {
            "a": {
              "chip": "BC22",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/87",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/87",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/87",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "693": {
      "mapping": {
        "id": 693,
        "name": "fab1/87/6",
        "controllingPort": 693,
        "pins": [
          {
            "a": {
              "chip": "BC41",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/87",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/87",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/87",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "694": {
      "mapping": {
        "id": 694,
        "name": "fab1/87/7",
        "controllingPort": 694,
        "pins": [
          {
            "a": {
              "chip": "BC22",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/87",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/87",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC22",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/87",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "695": {
      "mapping": {
        "id": 695,
        "name": "fab1/87/8",
        "controllingPort": 695,
        "pins": [
          {
            "a": {
              "chip": "BC41",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/87",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/87",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC41",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/87",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "696": {
      "mapping": {
        "id": 696,
        "name": "fab1/88/1",
        "controllingPort": 696,
        "pins": [
          {
            "a": {
              "chip": "BC21",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/88",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/88",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/88",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "697": {
      "mapping": {
        "id": 697,
        "name": "fab1/88/2",
        "controllingPort": 697,
        "pins": [
          {
            "a": {
              "chip": "BC42",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/88",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/88",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/88",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "698": {
      "mapping": {
        "id": 698,
        "name": "fab1/88/3",
        "controllingPort": 698,
        "pins": [
          {
            "a": {
              "chip": "BC21",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/88",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/88",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC21",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/88",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "699": {
      "mapping": {
        "id": 699,
        "name": "fab1/88/4",
        "controllingPort": 699,
        "pins": [
          {
            "a": {
              "chip": "BC42",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/88",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/88",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC42",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/88",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "700": {
      "mapping": {
        "id": 700,
        "name": "fab1/88/5",
        "controllingPort": 700,
        "pins": [
          {
            "a": {
              "chip": "BC20",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/88",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/88",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/88",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "701": {
      "mapping": {
        "id": 701,
        "name": "fab1/88/6",
        "controllingPort": 701,
        "pins": [
          {
            "a": {
              "chip": "BC43",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/88",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/88",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/88",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "702": {
      "mapping": {
        "id": 702,
        "name": "fab1/88/7",
        "controllingPort": 702,
        "pins": [
          {
            "a": {
              "chip": "BC20",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/88",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/88",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC20",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/88",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "703": {
      "mapping": {
        "id": 703,
        "name": "fab1/88/8",
        "controllingPort": 703,
        "pins": [
          {
            "a": {
              "chip": "BC43",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/88",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/88",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC43",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/88",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "704": {
      "mapping": {
        "id": 704,
        "name": "fab1/89/1",
        "controllingPort": 704,
        "pins": [
          {
            "a": {
              "chip": "BC19",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/89",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/89",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/89",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "705": {
      "mapping": {
        "id": 705,
        "name": "fab1/89/2",
        "controllingPort": 705,
        "pins": [
          {
            "a": {
              "chip": "BC44",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/89",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/89",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/89",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "706": {
      "mapping": {
        "id": 706,
        "name": "fab1/89/3",
        "controllingPort": 706,
        "pins": [
          {
            "a": {
              "chip": "BC19",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/89",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/89",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/89",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "707": {
      "mapping": {
        "id": 707,
        "name": "fab1/89/4",
        "controllingPort": 707,
        "pins": [
          {
            "a": {
              "chip": "BC44",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/89",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/89",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/89",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "708": {
      "mapping": {
        "id": 708,
        "name": "fab1/89/5",
        "controllingPort": 708,
        "pins": [
          {
            "a": {
              "chip": "BC18",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/89",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/89",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/89",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "709": {
      "mapping": {
        "id": 709,
        "name": "fab1/89/6",
        "controllingPort": 709,
        "pins": [
          {
            "a": {
              "chip": "BC45",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/89",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/89",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/89",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "710": {
      "mapping": {
        "id": 710,
        "name": "fab1/89/7",
        "controllingPort": 710,
        "pins": [
          {
            "a": {
              "chip": "BC18",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/89",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/89",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/89",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "711": {
      "mapping": {
        "id": 711,
        "name": "fab1/89/8",
        "controllingPort": 711,
        "pins": [
          {
            "a": {
              "chip": "BC45",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/89",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/89",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/89",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "712": {
      "mapping": {
        "id": 712,
        "name": "fab1/90/1",
        "controllingPort": 712,
        "pins": [
          {
            "a": {
              "chip": "BC17",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/90",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/90",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/90",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "713": {
      "mapping": {
        "id": 713,
        "name": "fab1/90/2",
        "controllingPort": 713,
        "pins": [
          {
            "a": {
              "chip": "BC46",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/90",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/90",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/90",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "714": {
      "mapping": {
        "id": 714,
        "name": "fab1/90/3",
        "controllingPort": 714,
        "pins": [
          {
            "a": {
              "chip": "BC17",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/90",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/90",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/90",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "715": {
      "mapping": {
        "id": 715,
        "name": "fab1/90/4",
        "controllingPort": 715,
        "pins": [
          {
            "a": {
              "chip": "BC46",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/90",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/90",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/90",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "716": {
      "mapping": {
        "id": 716,
        "name": "fab1/90/5",
        "controllingPort": 716,
        "pins": [
          {
            "a": {
              "chip": "BC16",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/90",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/90",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/90",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "717": {
      "mapping": {
        "id": 717,
        "name": "fab1/90/6",
        "controllingPort": 717,
        "pins": [
          {
            "a": {
              "chip": "BC47",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/90",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/90",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/90",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "718": {
      "mapping": {
        "id": 718,
        "name": "fab1/90/7",
        "controllingPort": 718,
        "pins": [
          {
            "a": {
              "chip": "BC16",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/90",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/90",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/90",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "719": {
      "mapping": {
        "id": 719,
        "name": "fab1/90/8",
        "controllingPort": 719,
        "pins": [
          {
            "a": {
              "chip": "BC47",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/90",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/90",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/90",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "720": {
      "mapping": {
        "id": 720,
        "name": "fab1/91/1",
        "controllingPort": 720,
        "pins": [
          {
            "a": {
              "chip": "BC19",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/91",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/91",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/91",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "721": {
      "mapping": {
        "id": 721,
        "name": "fab1/91/2",
        "controllingPort": 721,
        "pins": [
          {
            "a": {
              "chip": "BC44",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/91",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/91",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/91",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "722": {
      "mapping": {
        "id": 722,
        "name": "fab1/91/3",
        "controllingPort": 722,
        "pins": [
          {
            "a": {
              "chip": "BC19",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/91",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/91",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/91",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "723": {
      "mapping": {
        "id": 723,
        "name": "fab1/91/4",
        "controllingPort": 723,
        "pins": [
          {
            "a": {
              "chip": "BC44",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/91",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/91",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/91",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "724": {
      "mapping": {
        "id": 724,
        "name": "fab1/91/5",
        "controllingPort": 724,
        "pins": [
          {
            "a": {
              "chip": "BC18",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/91",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/91",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/91",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "725": {
      "mapping": {
        "id": 725,
        "name": "fab1/91/6",
        "controllingPort": 725,
        "pins": [
          {
            "a": {
              "chip": "BC45",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/91",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/91",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/91",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "726": {
      "mapping": {
        "id": 726,
        "name": "fab1/91/7",
        "controllingPort": 726,
        "pins": [
          {
            "a": {
              "chip": "BC18",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/91",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/91",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/91",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "727": {
      "mapping": {
        "id": 727,
        "name": "fab1/91/8",
        "controllingPort": 727,
        "pins": [
          {
            "a": {
              "chip": "BC45",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/91",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/91",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/91",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "728": {
      "mapping": {
        "id": 728,
        "name": "fab1/92/1",
        "controllingPort": 728,
        "pins": [
          {
            "a": {
              "chip": "BC17",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/92",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/92",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/92",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "729": {
      "mapping": {
        "id": 729,
        "name": "fab1/92/2",
        "controllingPort": 729,
        "pins": [
          {
            "a": {
              "chip": "BC46",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/92",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/92",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/92",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "730": {
      "mapping": {
        "id": 730,
        "name": "fab1/92/3",
        "controllingPort": 730,
        "pins": [
          {
            "a": {
              "chip": "BC17",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/92",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/92",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/92",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "731": {
      "mapping": {
        "id": 731,
        "name": "fab1/92/4",
        "controllingPort": 731,
        "pins": [
          {
            "a": {
              "chip": "BC46",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/92",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/92",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/92",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "732": {
      "mapping": {
        "id": 732,
        "name": "fab1/92/5",
        "controllingPort": 732,
        "pins": [
          {
            "a": {
              "chip": "BC16",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/92",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/92",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/92",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "733": {
      "mapping": {
        "id": 733,
        "name": "fab1/92/6",
        "controllingPort": 733,
        "pins": [
          {
            "a": {
              "chip": "BC47",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/92",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/92",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/92",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "734": {
      "mapping": {
        "id": 734,
        "name": "fab1/92/7",
        "controllingPort": 734,
        "pins": [
          {
            "a": {
              "chip": "BC16",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/92",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/92",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/92",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "735": {
      "mapping": {
        "id": 735,
        "name": "fab1/92/8",
        "controllingPort": 735,
        "pins": [
          {
            "a": {
              "chip": "BC47",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/92",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/92",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/92",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "736": {
      "mapping": {
        "id": 736,
        "name": "fab1/93/1",
        "controllingPort": 736,
        "pins": [
          {
            "a": {
              "chip": "BC19",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/93",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/93",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/93",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "737": {
      "mapping": {
        "id": 737,
        "name": "fab1/93/2",
        "controllingPort": 737,
        "pins": [
          {
            "a": {
              "chip": "BC44",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/93",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/93",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/93",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "738": {
      "mapping": {
        "id": 738,
        "name": "fab1/93/3",
        "controllingPort": 738,
        "pins": [
          {
            "a": {
              "chip": "BC19",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/93",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/93",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/93",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "739": {
      "mapping": {
        "id": 739,
        "name": "fab1/93/4",
        "controllingPort": 739,
        "pins": [
          {
            "a": {
              "chip": "BC44",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/93",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/93",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/93",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "740": {
      "mapping": {
        "id": 740,
        "name": "fab1/93/5",
        "controllingPort": 740,
        "pins": [
          {
            "a": {
              "chip": "BC18",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/93",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/93",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/93",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "741": {
      "mapping": {
        "id": 741,
        "name": "fab1/93/6",
        "controllingPort": 741,
        "pins": [
          {
            "a": {
              "chip": "BC45",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/93",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/93",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/93",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "742": {
      "mapping": {
        "id": 742,
        "name": "fab1/93/7",
        "controllingPort": 742,
        "pins": [
          {
            "a": {
              "chip": "BC18",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/93",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/93",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC18",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/93",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "743": {
      "mapping": {
        "id": 743,
        "name": "fab1/93/8",
        "controllingPort": 743,
        "pins": [
          {
            "a": {
              "chip": "BC45",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/93",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/93",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC45",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/93",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "744": {
      "mapping": {
        "id": 744,
        "name": "fab1/94/1",
        "controllingPort": 744,
        "pins": [
          {
            "a": {
              "chip": "BC17",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/94",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/94",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/94",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "745": {
      "mapping": {
        "id": 745,
        "name": "fab1/94/2",
        "controllingPort": 745,
        "pins": [
          {
            "a": {
              "chip": "BC46",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/94",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/94",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/94",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "746": {
      "mapping": {
        "id": 746,
        "name": "fab1/94/3",
        "controllingPort": 746,
        "pins": [
          {
            "a": {
              "chip": "BC17",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/94",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/94",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC17",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/94",
                  "lane": 2
                }
              }
            ]
          }
        }
      }
    },
    "747": {
      "mapping": {
        "id": 747,
        "name": "fab1/94/4",
        "controllingPort": 747,
        "pins": [
          {
            "a": {
              "chip": "BC46",
              "lane": 3
            },
            "z": {
              "end": {
                "chip": "fab1/94",
                "lane": 3
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/94",
                  "lane": 3
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC46",
                  "lane": 3
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/94",
                  "lane": 3
                }
              }
            ]
          }
        }
      }
    },
    "748": {
      "mapping": {
        "id": 748,
        "name": "fab1/94/5",
        "controllingPort": 748,
        "pins": [
          {
            "a": {
              "chip": "BC16",
              "lane": 4
            },
            "z": {
              "end": {
                "chip": "fab1/94",
                "lane": 4
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/94",
                  "lane": 4
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 4
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/94",
                  "lane": 4
                }
              }
            ]
          }
        }
      }
    },
    "749": {
      "mapping": {
        "id": 749,
        "name": "fab1/94/6",
        "controllingPort": 749,
        "pins": [
          {
            "a": {
              "chip": "BC47",
              "lane": 5
            },
            "z": {
              "end": {
                "chip": "fab1/94",
                "lane": 5
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/94",
                  "lane": 5
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 5
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/94",
                  "lane": 5
                }
              }
            ]
          }
        }
      }
    },
    "750": {
      "mapping": {
        "id": 750,
        "name": "fab1/94/7",
        "controllingPort": 750,
        "pins": [
          {
            "a": {
              "chip": "BC16",
              "lane": 6
            },
            "z": {
              "end": {
                "chip": "fab1/94",
                "lane": 6
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/94",
                  "lane": 6
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC16",
                  "lane": 6
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/94",
                  "lane": 6
                }
              }
            ]
          }
        }
      }
    },
    "751": {
      "mapping": {
        "id": 751,
        "name": "fab1/94/8",
        "controllingPort": 751,
        "pins": [
          {
            "a": {
              "chip": "BC47",
              "lane": 7
            },
            "z": {
              "end": {
                "chip": "fab1/94",
                "lane": 7
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/94",
                  "lane": 7
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC47",
                  "lane": 7
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/94",
                  "lane": 7
                }
              }
            ]
          }
        }
      }
    },
    "752": {
      "mapping": {
        "id": 752,
        "name": "fab1/95/1",
        "controllingPort": 752,
        "pins": [
          {
            "a": {
              "chip": "BC19",
              "lane": 0
            },
            "z": {
              "end": {
                "chip": "fab1/95",
                "lane": 0
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/95",
                  "lane": 0
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 0
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/95",
                  "lane": 0
                }
              }
            ]
          }
        }
      }
    },
    "753": {
      "mapping": {
        "id": 753,
        "name": "fab1/95/2",
        "controllingPort": 753,
        "pins": [
          {
            "a": {
              "chip": "BC44",
              "lane": 1
            },
            "z": {
              "end": {
                "chip": "fab1/95",
                "lane": 1
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/95",
                  "lane": 1
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC44",
                  "lane": 1
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/95",
                  "lane": 1
                }
              }
            ]
          }
        }
      }
    },
    "754": {
      "mapping": {
        "id": 754,
        "name": "fab1/95/3",
        "controllingPort": 754,
        "pins": [
          {
            "a": {
              "chip": "BC19",
              "lane": 2
            },
            "z": {
              "end": {
                "chip": "fab1/95",
                "lane": 2
              }
            }
          }
        ],
        "portType": 1,
        "attachedCorePortIndex": 0
      },
      "supportedProfiles": {
        "36": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/95",
                  "lane": 2
                }
              }
            ]
          }
        },
        "37": {
          "pins": {
            "iphy": [
              {
                "id": {
                  "chip": "BC19",
                  "lane": 2
                }
              }
            ],
            "transceiver": [
              {
                "id": {
                  "chip": "fab1/95",
                  "lane": 2
}