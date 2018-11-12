#pragma once

#include <graphene/chain/protocol/operations.hpp>
#include <graphene/chain/evaluator.hpp>
#include <graphene/chain/database.hpp>

namespace graphene {
	namespace chain {

		class guard_refund_balance_evaluator : public evaluator<guard_refund_balance_evaluator>
		{
		public:
			typedef guard_refund_balance_operation operation_type;
			void_result do_evaluate(const guard_refund_balance_operation& o);
			void_result do_apply(const guard_refund_balance_operation& o);
		};
		class guard_refund_crosschain_trx_evaluator :public evaluator<guard_refund_crosschain_trx_evaluator> {
		public:
			typedef guard_refund_crosschain_trx_operation operation_type;
			void_result do_evaluate(const guard_refund_crosschain_trx_operation& o);
			void_result do_apply(const guard_refund_crosschain_trx_operation& o);
		};
		class eth_cancel_fail_crosschain_trx_evaluate :public evaluator<eth_cancel_fail_crosschain_trx_evaluate> {
		public:
			typedef eth_cancel_fail_crosschain_trx_operation operation_type;
			void_result do_evaluate(const eth_cancel_fail_crosschain_trx_operation& o);
			void_result do_apply(const eth_cancel_fail_crosschain_trx_operation& o);
		};
	}
}