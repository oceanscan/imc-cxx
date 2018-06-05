//***************************************************************************
// Copyright 2017 OceanScan - Marine Systems & Technology, Lda.             *
//***************************************************************************
// Licensed under the Apache License, Version 2.0 (the "License");          *
// you may not use this file except in compliance with the License.         *
// You may obtain a copy of the License at                                  *
//                                                                          *
// http://www.apache.org/licenses/LICENSE-2.0                               *
//                                                                          *
// Unless required by applicable law or agreed to in writing, software      *
// distributed under the License is distributed on an "AS IS" BASIS,        *
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
// See the License for the specific language governing permissions and      *
// limitations under the License.                                           *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 6ce3702ce15845d52f703d618b715907                            *
//***************************************************************************

#ifndef IMC_UAMRXRANGE_HPP_INCLUDED_
#define IMC_UAMRXRANGE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <ostream>
#include <string>
#include <vector>

// IMC headers.
#include <IMC/Base/Config.hpp>
#include <IMC/Base/Message.hpp>
#include <IMC/Base/InlineMessage.hpp>
#include <IMC/Base/MessageList.hpp>
#include <IMC/Base/JSON.hpp>
#include <IMC/Base/Serialization.hpp>
#include <IMC/Spec/Enumerations.hpp>
#include <IMC/Spec/Bitfields.hpp>

namespace IMC
{
  //! UamRxRange.
  class UamRxRange: public Message
  {
  public:
    //! Sequence Id.
    uint16_t seq;
    //! System.
    std::string sys;
    //! Value.
    float value;

    static uint16_t
    getIdStatic(void)
    {
      return 817;
    }

    static UamRxRange*
    cast(Message* msg__)
    {
      return (UamRxRange*)msg__;
    }

    UamRxRange(void)
    {
      m_header.mgid = UamRxRange::getIdStatic();
      clear();
    }

    UamRxRange*
    clone(void) const
    {
      return new UamRxRange(*this);
    }

    void
    clear(void)
    {
      seq = 0;
      sys.clear();
      value = 0;
    }

    bool
    fieldsEqual(const Message& msg__) const
    {
      const IMC::UamRxRange& other__ = static_cast<const UamRxRange&>(msg__);
      if (seq != other__.seq) return false;
      if (sys != other__.sys) return false;
      if (value != other__.value) return false;
      return true;
    }

    uint8_t*
    serializeFields(uint8_t* bfr__) const
    {
      uint8_t* ptr__ = bfr__;
      ptr__ += IMC::serialize(seq, ptr__);
      ptr__ += IMC::serialize(sys, ptr__);
      ptr__ += IMC::serialize(value, ptr__);
      return ptr__;
    }

    size_t
    deserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::deserialize(seq, bfr__, size__);
      bfr__ += IMC::deserialize(sys, bfr__, size__);
      bfr__ += IMC::deserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    size_t
    reverseDeserializeFields(const uint8_t* bfr__, size_t size__)
    {
      const uint8_t* start__ = bfr__;
      bfr__ += IMC::reverseDeserialize(seq, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(sys, bfr__, size__);
      bfr__ += IMC::reverseDeserialize(value, bfr__, size__);
      return bfr__ - start__;
    }

    uint16_t
    getId(void) const
    {
      return UamRxRange::getIdStatic();
    }

    const char*
    getName(void) const
    {
      return "UamRxRange";
    }

    size_t
    getFixedSerializationSize(void) const
    {
      return 6;
    }

    size_t
    getVariableSerializationSize(void) const
    {
      return IMC::getSerializationSize(sys);
    }

    double
    getValueFP(void) const
    {
      return static_cast<double>(value);
    }

    void
    setValueFP(double val)
    {
      value = static_cast<float>(val);
    }

    void
    fieldsToJSON(std::ostream& os__, unsigned nindent__) const
    {
      IMC::toJSON(os__, "seq", seq, nindent__);
      IMC::toJSON(os__, "sys", sys, nindent__);
      IMC::toJSON(os__, "value", value, nindent__);
    }
  };
}

#endif