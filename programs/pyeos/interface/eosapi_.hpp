#include <Python.h>

#pragma once

#include <boost/asio.hpp>
#include <fc/exception/exception.hpp>
#include <fc/io/json.hpp>
#include <fc/variant.hpp>
#include <iostream>
#include <string>
#include <vector>

//#include <eosio/account_history_api_plugin/account_history_api_plugin.hpp>
#include <eosio/chain/config.hpp>
#include <eosio/chain_plugin/chain_plugin.hpp>

#include <boost/algorithm/string/split.hpp>
#include <boost/range/adaptor/transformed.hpp>
#include <boost/range/algorithm/sort.hpp>
#include <eosio/utilities/key_conversion.hpp>

#include <IR/Module.h>
#include <IR/Validate.h>
#include <Inline/BasicTypes.h>
#include <Runtime/Runtime.h>
#include <WASM/WASM.h>
#include <WAST/WAST.h>

#include <fc/io/fstream.hpp>

#include <Python.h>
#include <boost/thread.hpp>
#include <fc/log/logger_config.hpp>

#include <eosio/chain/exceptions.hpp>
#include <eosio/chain_api_plugin/chain_api_plugin.hpp>
#include <eosio/producer_plugin/producer_plugin.hpp>
#include <fc/io/json.hpp>

#include <eosio/chain/wast_to_wasm.hpp>
#include <eosio/chain_plugin/chain_plugin.hpp>
#include <eosio/wallet_plugin/wallet_manager.hpp>
#include <eosio/wallet_plugin/wallet_plugin.hpp>

#include <eosio/chain/db_api.hpp>

using namespace std;
using namespace eosio;
using namespace eosio::chain;
using namespace eosio::utilities;
using namespace eosio::wallet;
using namespace eosio::chain_apis;

bool app_isshutdown_();
uint32_t now2_();

controller& db();
string to_bitset(uint64_t val);
wallet_manager& get_wm();

#define INT_65 65

int produce_block_();
int produce_block_start_();
int produce_block_end_();

PyObject* get_info_();
PyObject* get_block_(char* num_or_id);
PyObject* get_account_(const char* name);
bool is_account_(const char* _name);

PyObject* get_currency_balance_(string& _code, string& _account, string& _symbol);

PyObject* create_account_(string creator, string newaccount, string owner,
                          string active, int sign);

PyObject* create_key_();
PyObject* get_public_key_(string& wif_key);

int get_transaction_(string& id, string& result);

int get_code_(string& name, string& wast, string& abi, string& code_hash, int& vm_type);
int get_table_(string& scope, string& code, string& table, string& result);

uint64_t string_to_uint64_(string str);
string uint64_to_string_(uint64_t n);
string convert_to_eth_address(string& name);
string convert_from_eth_address(string& eth_address);


PyObject* push_transactions_(vector<vector<chain::action>>& vv, bool sign, uint64_t skip_flag = 0, bool async = false, bool compress = false, int32_t max_ram_usage=std::numeric_limits<int32_t>::max());


void wast2wasm_( string& wast ,string& result);
void wasm2wast_(string& wasm, string& result);

bool is_replay_();

void fc_pack_bytes_(string& in, string& out);
void fc_unpack_bytes_(string& in, string& out);

void fc_pack_setabi_(string& abiPath, uint64_t account, string& out);
void fc_pack_setconfig_(string& abiPath, uint64_t account, string& out);

void fc_pack_updateauth(string& _account, string& _permission, string& _parent, string& _auth, uint32_t _delay, string& result);
void fc_pack_args(uint64_t code, uint64_t action, string& json, string& bin);
PyObject* fc_unpack_args(uint64_t code, uint64_t action, string& bin);


PyObject* gen_transaction_(vector<chain::action>& v, int expiration);
PyObject* sign_transaction_(string& trx_json_to_sign, string& str_private_key);
PyObject* push_raw_transaction_(string& signed_trx);

PyObject* get_actions_(uint64_t account, int pos, int offset);
PyObject* get_transaction_(string& id);

void n_to_symbol_(uint64_t n, string& out);
uint64_t symbol_to_n_(string& n);

bool debug_mode_();

void get_code_hash_(string& name, string& code_hash); // @suppress("Ambiguous problem")
void sha256_(string& data, string& hash); // @suppress("Ambiguous problem")

uint64_t ethaddr2n_(string& addr);
void n2ethaddr_(uint64_t n, string& addr);

uint64_t get_code_update_time_ms_(string& name);

void transaction_listen_();
void transaction_disconnect_();

void get_active_producers_(vector<string>& producers);

extern "C" {
	int has_option(const char* _option);
	int get_option(const char* option, char *result, int size);
}

void producer_pause_();
void producer_resume_();

