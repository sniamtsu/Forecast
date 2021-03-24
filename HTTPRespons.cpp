#include "HTTPRespons.hpp"
HTTPRespons::HTTPRespons(json _jsn) :m_respons(_jsn)
{

}

json HTTPRespons::getRoot()const
{
	return m_respons;
}