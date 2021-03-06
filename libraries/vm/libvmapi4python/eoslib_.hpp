/*
 * eoslib_.hpp
 *
 *  Created on: Sep 13, 2017
 *      Author: newworld
 */

#ifndef EOSLIB__HPP_
#define EOSLIB__HPP_

#include <stdlib.h>
#include <stdint.h>
#include <string>
#include <vector>
#include <eosiolib_native/vm_api.h>

#include <eosiolib/action.hpp>

using namespace std;
using namespace eosio;

uint64_t s2n_(const char* str);
void n2s_(uint64_t _name, string& out);
int is_account_(uint64_t account);
void eosio_assert_(int condition, const char* str);

int read_action_(char* memory, size_t size);
int action_size_();

void require_auth_(uint64_t account);
void require_recipient_(uint64_t account);

int db_store_i64_( uint64_t scope, uint64_t table, uint64_t payer, uint64_t id, const char* buffer, size_t buffer_size );
void db_update_i64_( int itr, uint64_t payer, const char* buffer, size_t buffer_size );
void db_remove_i64_( int itr );
int db_get_i64_( int itr, char* buffer, size_t buffer_size );
int db_next_i64_( int itr, uint64_t* primary );
int db_previous_i64_( int itr, uint64_t* primary );
int db_find_i64_( uint64_t code, uint64_t scope, uint64_t table, uint64_t id );
int db_lowerbound_i64_( uint64_t code, uint64_t scope, uint64_t table, uint64_t id );
int db_upperbound_i64_( uint64_t code, uint64_t scope, uint64_t table, uint64_t id );
int db_end_i64_( uint64_t code, uint64_t scope, uint64_t table );

void pack_bytes_(string& in, string& out);
void unpack_bytes_(string& in, string& out);

int call_set_args_(string& args);
int call_get_args_(string& args);

uint64_t call_(uint64_t account, uint64_t func);

int send_inline_(action& action);
int send_deferred_(uint128_t* id, uint64_t payer, vector<action> actions, int expiration, int delay_sec, int max_ram_usage, bool replace_existing);

//interface/wasm_.cpp
namespace eosio { namespace chain {
   uint64_t wasm_call2_(uint64_t receiver, string& file_name, string& func, vector<uint64_t>& args, vector<char>& result);
}}

vm_api& api();

#endif /* EOSLIB__HPP_ */
