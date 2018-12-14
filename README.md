1Node Core (fork of PIVX) integration/staging repository
======================================


### Coin Specs
|   |  |
| --- | ---:|
| Coin Name                   | 1NODE          |
| Ticker                      | XON            |
| Block Time                  | 60 Seconds     |
| Max Coin Supply (PoW Phase) | 250,999 XON    |
| Max Coin Supply (PoS Phase) | 49,749,001 XON |
| Premine (block 1)           | 250,000 XON    |
| Max Supply				  | 50,000,000 XON |
| MN Collateral				  | 1,500 XON      |

### additional specs:
|   |  |
| --- | ---:|
| POW phase (blocks 2-1,000)| 1XON |
| Stake Min Age | 60 minutes |
| Maturity | 10 blocks |


### Reward Distribution

| **Block Height**      | **Block Reward** | **Masternode**  | **PoS**   |
|----------------------:|------------------|-----------------|-----------|
| 1,001-10,000          | **1** XON        | **70 %**        | **30 %**  |
| 10,001-20,000         | **2** XON        | **70 %**        | **30 %**  |
| 20,001-30,000         | **3** XON        | **71 %**        | **29 %**  |
| 30,001-40,000         | **4** XON        | **72 %**        | **28 %**  |
| 40,001-50,000         | **5** XON        | **72 %**        | **28 %**  |
| 50,001-60,000         | **6** XON        | **73 %**        | **27 %**  |
| 60,001-70,000         | **7** XON        | **74 %**        | **26 %**  |
| 70,001-80,000         | **8** XON        | **75 %**        | **25 %**  |
| 80,001-90,000         | **9** XON        | **76 %**        | **24 %**  |
| 90,001-100,000        | **10** XON       | **77 %**        | **23 %**  |
| 100,001-110,000       | **11** XON       | **78 %**        | **22 %**  |
| 110,001-120,000       | **12** XON       | **79 %**        | **21 %**  |
| 120,001-130,000       | **13** XON       | **80 %**        | **20 %**  |
| 130,001-140,000       | **14** XON       | **81 %**        | **19 %**  |
| 140,001-150,000       | **15** XON       | **82 %**        | **18 %**  |
| 150,001-160,000       | **16** XON       | **83 %**        | **17 %**  |
| 160,001-170,000       | **17** XON       | **84 %**        | **16 %**  |
| 170,001-180,000       | **18** XON       | **85 %**        | **15 %**  |
| 180,001-190,000       | **19** XON       | **86 %**        | **14 %**  |
| 190,001-200,000       | **20** XON       | **87 %**        | **13 %**  |
| 200,001-210,000       | **18** XON       | **88 %**        | **12 %**  |
| 210,001-220,000       | **16** XON       | **89 %**        | **11 %**  |
| 220,001-230,000       | **14** XON       | **90 %**        | **10 %**  |
| 230,001-240,000       | **12** XON       | **90 %**        | **10 %**  |
| 240,001>              | **10** XON       | **90 %**        | **10 %**  |


It is recommended [use the shell script](https://github.com/1node-project/1node/1node-install) to install a 1Node Masternode on a Linux server running Ubuntu 14.04, 16.04, 18.04

***

Quick installation of the 1Node daemon under linux. See detailed instructions there [build-unix.md](build-unix.md)

Installation of libraries (using root user):

    add-apt-repository ppa:bitcoin/bitcoin -y
    apt-get update
    apt-get install -y build-essential libtool autotools-dev automake pkg-config libssl-dev libevent-dev bsdmainutils
    apt-get install -y libboost-system-dev libboost-filesystem-dev libboost-chrono-dev libboost-program-options-dev libboost-test-dev libboost-thread-dev
    apt-get install -y libdb4.8-dev libdb4.8++-dev

Cloning the repository and compiling (use any user with the sudo group):

    cd
    git clone https://github.com/1node-project/1node.git
    cd 1Node
    ./autogen.sh
    ./configure
    sudo make install
    cd src
    sudo strip 1noded
    sudo strip 1node-cli
    sudo strip 1node-tx
    cd ..

Running the daemon:

    1noded

Stopping the daemon:

    1node-cli stop

Demon status:

    1node-cli getinfo
    1node-cli mnsync status

All binaries for different operating systems, you can download in the releases repository:

https://github.com/1node-project/1node/releases

P2P port: 63984, RPC port: 63983
-
Distributed under the MIT software license, see the accompanying file COPYING or http://www.opensource.org/licenses/mit-license.php.
